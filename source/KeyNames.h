#pragma once

/* Virtual Keys, Standard Set */

const static char csKeyNames[256][18]=
{
	"0x00 --","0x01 L_Btn","0x02 R_Btn","0x03 CANCEL","0x04 M_Btn","0x05 XBtn1","0x06 XBtn2",	// 0x00 - 0x06
	"0x07 ua",		// 0x07 : unassigned

"Backspace","Tab",		// 0x08 - 0x09
	"0x0A","0x0B",		// 0x0A - 0x0B : reserved
"CLEAR","Enter",		// 0x0C - 0x0D
	"0x0E","0x0F",		// 0x0E - 0x0F
"Shift","Control","Alt",	// 0x10 - 0x12
//"PAUSE","Caps Lock",		// 0x13 - 0x14
"PAUSE","Caps",		// 0x13 - 0x14

	"KANA","HANGUL","JUNJA","FINAL","HANJA","0x1A",	// 0x15 - 0x1A
"Escape",		// 0x1B
	"CONVERT","NONCONVERT","ACCEPT","MODECHANGE",	// 0x1C - 0x1F
"Space",		// 0x20
//"Page Up","Page Down","End","Home",		// 0x21 - 0x24
"PaUp","PaDn","End","Home",		// 0x21 - 0x24
"Left","Up","Right","Down",				// 0x25 - 0x28

"SELECT","PRINT","EXECUTE","SNAPSHOT",	// 0x29 - 0x2C
"Insert","Delete","HELP",				// 0x2D - 0x2F

"0","1","2","3","4","5","6","7","8","9",  // 0x30 - 0x39
	"0x3A","0x3B","0x3C","0x3D","0x3E","0x3F",
	"0x40",		// 0x40 : unassigned
"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",	// 0x41 - 0x5A

"WinL","WinR","Apps",	// 0x5B - 0x5D
	"0x5E",		// 0x5E : reserved
"SLEEP",	// 0x5F

"Num 0","Num 1","Num 2","Num 3","Num 4","Num 5","Num 6","Num 7","Num 8","Num 9",	// 0x60 - 0x69
"Num *","Num +","Num SEP","Num -","Num .","Num /",	// 0x6A - 0x6F

"F1","F2","F3","F4","F5","F6","F7","F8","F9","F10","F11","F12",				// 0x70 - 0x7B
"F13","F14","F15","F16","F17","F18","F19","F20","F21","F22","F23","F24",	// 0x7C - 0x87
	"0x88","0x89","0x8A","0x8B","0x8C","0x8D","0x8E","0x8F",	// 0x88 - 0x8F : unassigned
//"Num Lock","Scroll Lock",		// 0x90 - 0x91
"Num","Scroll",		// 0x90 - 0x91
    "Num =",	// 0x92
	"0x93","0x94","0x95","0x96",	// 0x93 - 0x96
	"0x97","0x98","0x99","0x9A","0x9B","0x9C","0x9D","0x9E","0x9F",	// 0x97 - 0x9F : unassigned

//"ShiftL","ShiftR","ControlL","ControlR","AltL","AltR",		// 0xA0 - 0xA5
"ShiftL","ShiftR","CtrlL","CtrlR","AltL","AltR",		// 0xA0 - 0xA5

"Browser Back","Browser Forward","Browser Refresh","Browser Stop",
"Browser Search","Browser Favorites","Browser Home",		// 0xA6 - 0xAC

"Volume Mute","Volume Down","Volume Up",
"Media Next","Media Prev","Media Stop","Media Play",
"Launch Mail","Launch Media","Launch App1","Launch App2",	// 0xAD - 0xB7
	"0xB8","0xB9",	// 0xB8 - 0xB9 : reserved

";","=",",","-",".","/","`",	// 0xBA - 0xC0

	"0xC1","0xC2","0xC3","0xC4","0xC5","0xC6","0xC7","0xC8","0xC9","0xCA","0xCB","0xCC","0xCD","0xCE","0xCF",
	"0xD0","0xD1","0xD2","0xD3","0xD4","0xD5","0xD6","0xD7",	// 0xC1 - 0xD7 : reserved
	"0xD8","0xD9","0xDA",	// 0xD8 - 0xDA : unassigned

"[","\\","]","\'",	// 0xDB - 0xDE
"0xDF OEM_8",		// 0xDF

"0xE0",		// 0xE0 : reserved
"0xE1 OEM_AX","0xE2 OEM_102","0xE3 ICO_HELP","0xE4 ICO_00",         // 0xE1 - 0xE4
"0xE5 PROCESSKEY","0xE6 ICO_CLEAR","0xE7 PACKET",		// 0xE5 - 0xE7
"0xE8",		// 0xE8 : unassigned

"0xE9 RESET","0xEA JUMP", "0xEB PA1","0xEC PA2","0xED PA3",
"0xEE WSCTRL","0xEF CUSEL", "0xF0 ATTN","0xF1 FINISH",
"0xF2 COPY","0xF3 AUTO", "0xF4 ENLW","0xF5 BACKTAB",	// 0xE9 - 0xF5

"0xF6 ATTN","0xF7 CRSEL", "0xF8 EXSEL","0xF9 EREOF",
"0xFA PLAY","0xFB ZOOM", "0xFC NONAME","0xFD PA1", "0xFE OEM_CLEAR",			// 0xF6 - 0xFE

	"0xFF --"  // 0xFF : reserved
};
