#ifndef PHX_Button
#define PHX_Button

#include "Common.h"
#include "SDL.h"

PHX_API const Button Button_Null;
PHX_API const Button Button_First;

PHX_API const Button Button_Keyboard_First;
PHX_API const Button Button_Keyboard_A;
PHX_API const Button Button_Keyboard_B;
PHX_API const Button Button_Keyboard_C;
PHX_API const Button Button_Keyboard_D;
PHX_API const Button Button_Keyboard_E;
PHX_API const Button Button_Keyboard_F;
PHX_API const Button Button_Keyboard_G;
PHX_API const Button Button_Keyboard_H;
PHX_API const Button Button_Keyboard_I;
PHX_API const Button Button_Keyboard_J;
PHX_API const Button Button_Keyboard_K;
PHX_API const Button Button_Keyboard_L;
PHX_API const Button Button_Keyboard_M;
PHX_API const Button Button_Keyboard_N;
PHX_API const Button Button_Keyboard_O;
PHX_API const Button Button_Keyboard_P;
PHX_API const Button Button_Keyboard_Q;
PHX_API const Button Button_Keyboard_R;
PHX_API const Button Button_Keyboard_S;
PHX_API const Button Button_Keyboard_T;
PHX_API const Button Button_Keyboard_U;
PHX_API const Button Button_Keyboard_V;
PHX_API const Button Button_Keyboard_W;
PHX_API const Button Button_Keyboard_X;
PHX_API const Button Button_Keyboard_Y;
PHX_API const Button Button_Keyboard_Z;
PHX_API const Button Button_Keyboard_N0;
PHX_API const Button Button_Keyboard_N1;
PHX_API const Button Button_Keyboard_N2;
PHX_API const Button Button_Keyboard_N3;
PHX_API const Button Button_Keyboard_N4;
PHX_API const Button Button_Keyboard_N5;
PHX_API const Button Button_Keyboard_N6;
PHX_API const Button Button_Keyboard_N7;
PHX_API const Button Button_Keyboard_N8;
PHX_API const Button Button_Keyboard_N9;
PHX_API const Button Button_Keyboard_F1;
PHX_API const Button Button_Keyboard_F2;
PHX_API const Button Button_Keyboard_F3;
PHX_API const Button Button_Keyboard_F4;
PHX_API const Button Button_Keyboard_F5;
PHX_API const Button Button_Keyboard_F6;
PHX_API const Button Button_Keyboard_F7;
PHX_API const Button Button_Keyboard_F8;
PHX_API const Button Button_Keyboard_F9;
PHX_API const Button Button_Keyboard_F10;
PHX_API const Button Button_Keyboard_F11;
PHX_API const Button Button_Keyboard_F12;
PHX_API const Button Button_Keyboard_F13;
PHX_API const Button Button_Keyboard_F14;
PHX_API const Button Button_Keyboard_F15;
PHX_API const Button Button_Keyboard_F16;
PHX_API const Button Button_Keyboard_F17;
PHX_API const Button Button_Keyboard_F18;
PHX_API const Button Button_Keyboard_F19;
PHX_API const Button Button_Keyboard_F20;
PHX_API const Button Button_Keyboard_F21;
PHX_API const Button Button_Keyboard_F22;
PHX_API const Button Button_Keyboard_F23;
PHX_API const Button Button_Keyboard_F24;
PHX_API const Button Button_Keyboard_KP0;
PHX_API const Button Button_Keyboard_KP1;
PHX_API const Button Button_Keyboard_KP2;
PHX_API const Button Button_Keyboard_KP3;
PHX_API const Button Button_Keyboard_KP4;
PHX_API const Button Button_Keyboard_KP5;
PHX_API const Button Button_Keyboard_KP6;
PHX_API const Button Button_Keyboard_KP7;
PHX_API const Button Button_Keyboard_KP8;
PHX_API const Button Button_Keyboard_KP9;
PHX_API const Button Button_Keyboard_KPNumLock;
PHX_API const Button Button_Keyboard_KPDivide;
PHX_API const Button Button_Keyboard_KPMultiply;
PHX_API const Button Button_Keyboard_KPSubtract;
PHX_API const Button Button_Keyboard_KPAdd;
PHX_API const Button Button_Keyboard_KPEnter;
PHX_API const Button Button_Keyboard_KPDecimal;
PHX_API const Button Button_Keyboard_Backspace;
PHX_API const Button Button_Keyboard_Escape;
PHX_API const Button Button_Keyboard_Return;
PHX_API const Button Button_Keyboard_Space;
PHX_API const Button Button_Keyboard_Tab;
PHX_API const Button Button_Keyboard_Backtick;
PHX_API const Button Button_Keyboard_CapsLock;
PHX_API const Button Button_Keyboard_Minus;
PHX_API const Button Button_Keyboard_Equals;
PHX_API const Button Button_Keyboard_LBracket;
PHX_API const Button Button_Keyboard_RBracket;
PHX_API const Button Button_Keyboard_Backslash;
PHX_API const Button Button_Keyboard_Semicolon;
PHX_API const Button Button_Keyboard_Apostrophe;
PHX_API const Button Button_Keyboard_Comma;
PHX_API const Button Button_Keyboard_Period;
PHX_API const Button Button_Keyboard_Slash;
PHX_API const Button Button_Keyboard_PrintScreen;
PHX_API const Button Button_Keyboard_ScrollLock;
PHX_API const Button Button_Keyboard_Pause;
PHX_API const Button Button_Keyboard_Insert;
PHX_API const Button Button_Keyboard_Delete;
PHX_API const Button Button_Keyboard_Home;
PHX_API const Button Button_Keyboard_End;
PHX_API const Button Button_Keyboard_PageUp;
PHX_API const Button Button_Keyboard_PageDown;
PHX_API const Button Button_Keyboard_Right;
PHX_API const Button Button_Keyboard_Left;
PHX_API const Button Button_Keyboard_Down;
PHX_API const Button Button_Keyboard_Up;
PHX_API const Button Button_Keyboard_LCtrl;
PHX_API const Button Button_Keyboard_LShift;
PHX_API const Button Button_Keyboard_LAlt;
PHX_API const Button Button_Keyboard_LMeta;
PHX_API const Button Button_Keyboard_RCtrl;
PHX_API const Button Button_Keyboard_RShift;
PHX_API const Button Button_Keyboard_RAlt;
PHX_API const Button Button_Keyboard_RMeta;
PHX_API const Button Button_Keyboard_Last;

PHX_API const Button Button_Mouse_First;
PHX_API const Button Button_Mouse_Left;
PHX_API const Button Button_Mouse_Middle;
PHX_API const Button Button_Mouse_Right;
PHX_API const Button Button_Mouse_X1;
PHX_API const Button Button_Mouse_X2;
PHX_API const Button Button_Mouse_X;
PHX_API const Button Button_Mouse_Y;
PHX_API const Button Button_Mouse_ScrollX;
PHX_API const Button Button_Mouse_ScrollY;
PHX_API const Button Button_Mouse_Last;

PHX_API const Button Button_Gamepad_First;
PHX_API const Button Button_Gamepad_Button_First;
PHX_API const Button Button_Gamepad_A;
PHX_API const Button Button_Gamepad_B;
PHX_API const Button Button_Gamepad_X;
PHX_API const Button Button_Gamepad_Y;
PHX_API const Button Button_Gamepad_Back;
PHX_API const Button Button_Gamepad_Guide;
PHX_API const Button Button_Gamepad_Start;
PHX_API const Button Button_Gamepad_LStick;
PHX_API const Button Button_Gamepad_RStick;
PHX_API const Button Button_Gamepad_LBumper;
PHX_API const Button Button_Gamepad_RBumper;
PHX_API const Button Button_Gamepad_Up;
PHX_API const Button Button_Gamepad_Down;
PHX_API const Button Button_Gamepad_Left;
PHX_API const Button Button_Gamepad_Right;
PHX_API const Button Button_Gamepad_Button_Last;
PHX_API const Button Button_Gamepad_Axis_First;
PHX_API const Button Button_Gamepad_LTrigger;
PHX_API const Button Button_Gamepad_RTrigger;
PHX_API const Button Button_Gamepad_LStickX;
PHX_API const Button Button_Gamepad_LStickY;
PHX_API const Button Button_Gamepad_RStickX;
PHX_API const Button Button_Gamepad_RStickY;
PHX_API const Button Button_Gamepad_Axis_Last;
PHX_API const Button Button_Gamepad_Last;

PHX_API const Button Button_System_First;
PHX_API const Button Button_System_Exit;
PHX_API const Button Button_System_Last;

PHX_API const Button Button_Last;

PHX_API DeviceType                Button_ToDeviceType             (Button);
PHX_API cstr                      Button_ToString                 (Button);

/* --- Private API -----------------------------------------------------------*/

PRIVATE bool                      Button_IsAutoRelease            (Button);
PRIVATE Button                    Button_FromSDLScancode          (SDL_Scancode);
PRIVATE SDL_Scancode              Button_ToSDLScancode            (Button);
PRIVATE Button                    Button_FromSDLMouseButton       (uint8);
PRIVATE uint8                     Button_ToSDLMouseButton         (Button);
PRIVATE Button                    Button_FromSDLControllerAxis    (SDL_GameControllerAxis);
PRIVATE SDL_GameControllerAxis    Button_ToSDLControllerAxis      (Button);
PRIVATE Button                    Button_FromSDLControllerButton  (SDL_GameControllerButton);
PRIVATE SDL_GameControllerButton  Button_ToSDLControllerButton    (Button);

#endif