cmake_minimum_required (VERSION 3.0.2)
project (LibPHX)
set (CMAKE_BUILD_TYPE Release)
include (script/build/Shared.cmake)

# ------------------------------------------------------------------------------

file (GLOB HEADERS "include/*.h")
file (GLOB SOURCES "src/*.cpp")

add_library (phx SHARED ${SOURCES} ${HEADERS})
phx_configure_output_dir (phx)
phx_configure_target_properties (phx)

target_compile_definitions (phx PRIVATE LIBPHX_BUILDING=1)
target_include_directories (phx PUBLIC "include")
target_include_directories (phx PUBLIC "ext/include")
target_include_directories (phx PUBLIC "ext/include/bullet")
target_link_directories (phx PUBLIC "ext/lib/${PLATARCH}")

set_target_properties (phx PROPERTIES
  PREFIX "lib"
  OUTPUT_NAME_DEBUG "phx${ARCH}d"
  OUTPUT_NAME_RELEASE "phx${ARCH}r"
  OUTPUT_NAME_RELWITHDEBINFO "phx${ARCH}"
  OUTPUT_NAME_MINSIZEREL "phx${ARCH}rm")

# ------------------------------------------------------------------------------

if (WINDOWS)

  # register an external shared library
  function (add_extlib name lib dll)
    add_library (${name} SHARED IMPORTED GLOBAL)
    set_property (TARGET ${name} PROPERTY IMPORTED_IMPLIB "${CMAKE_CURRENT_SOURCE_DIR}/ext/lib/${PLATARCH}/${lib}")
    set_property (TARGET ${name} PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/ext/lib/${PLATARCH}/${dll}")
  endfunction ()

  # link target to an external library; also add a post-build step to
  # copy the library DLL into the bin folder
  function (target_link_extlib target lib)
    target_link_libraries (${target} ${lib})
    add_custom_command (TARGET ${target} POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
      $<TARGET_FILE:${lib}> $<TARGET_FILE_DIR:${target}>
    )
  endfunction ()

  add_extlib (glew glew32.lib glew32.dll)
  add_extlib (lz4 liblz4.lib liblz4.dll)
  add_extlib (lua51 lua51.lib lua51.dll)
  add_extlib (sdl2 SDL2.lib SDL2.dll)

  if (ARCH EQUAL "32")
    add_extlib (fmod fmodL_vc.lib fmodL.dll)
    add_extlib (fmodstudio fmodstudioL_vc.lib fmodstudioL.dll)
  else ()
    add_extlib (fmod fmodL64_vc.lib fmodL64.dll)
    add_extlib (fmodstudio fmodstudioL64_vc.lib fmodstudioL64.dll)
  endif ()

elseif (LINUX)
  # TODO

elseif (APPLE)

  # Register an external shared library
  function (add_extlib name lib dylib)
    add_library (${name} SHARED IMPORTED GLOBAL)
    set_property (TARGET ${name} PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/ext/lib/${PLATARCH}/${dylib}")
  endfunction ()

  # Link target to an external library
  function (target_link_extlib target lib)
    target_link_libraries (${target} ${lib})
  endfunction ()

  # TODO: using homebrew was dumb, instead, prefer to statically link (and ensure correct versioning).
  # TODO: gah i lost all of the arm64 dylibs while forking the remote repo... sometimes i hate git
  find_package(OpenGL REQUIRED)
  add_extlib (glew libGLEW.a libGLEW.dylib)
  find_package(SDL2 REQUIRED)
  find_package(Lua51 REQUIRED)
  find_package(Freetype REQUIRED)

  # Since lz4 doesn't have a CMake file, use the checked-in static library *.a and dynamic library *.dylib
  add_extlib (lz4 liblz4.a liblz4.1.dylib)
  add_extlib (BulletCollision libBulletCollision.2.87.dylib libBulletCollision.2.87.dylib)
  add_extlib (BulletDynamics libBulletDynamics.2.87.dylib libBulletDynamics.2.87.dylib)

  # TODO: test audio; not convinced this is right since i couldn't find a static lib for fmod / fmod-studio.
  add_extlib (fmod libfmod.dylib libfmod.dylib) # release version is libfmodL.dylib
  add_extlib (fmodstudio libfmodstudio.dylib libfmodstudio.dylib) # release version also has L suffix.

endif ()

# ------------------------------------------------------------------------------

if (WINDOWS)

  target_link_libraries (phx
    opengl32.lib
    user32.lib winmm.lib Ws2_32.lib
    freetype.lib
    BulletCollision.lib BulletDynamics.lib LinearMath.lib)

  target_link_extlib (phx glew)
  target_link_extlib (phx sdl2)
  target_link_extlib (phx lz4)
  target_link_extlib (phx lua51)
  target_link_extlib (phx fmod)
  target_link_extlib (phx fmodstudio)

elseif (LINUX)

  target_link_libraries (phx
    GL
    GLEW
    dl
    SDL2
    freetype
    luajit-5.1
    lz4
    fmod fmodstudio
    BulletCollision BulletDynamics)

  # Add ext/lib/{$PLATARCH} to runtime library search path
  target_link_options (phx PRIVATE "-Wl,-rpath,../ext/lib/${PLATARCH}")

elseif (APPLE)

  target_link_libraries (phx
    ${OPENGL_LIBRARIES}
    glew
    ${SDL2_LIBRARIES}
    ${LUA51_LIBRARIES}
    ${FREETYPE_LIBRARIES}
    lz4
    fmod fmodstudio
    BulletCollision BulletDynamics)

    # Add ext/lib/{$PLATARCH} to runtime library search path
    target_link_options (phx PRIVATE "-Wl,-rpath,@executable_path/../ext/lib/${PLATARCH}")

endif ()
