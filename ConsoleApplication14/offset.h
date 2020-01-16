#pragma once
#include <Windows.h>

int Value1;
int Value2;
int infinite = 9999;
DWORD pid = NULL;
DWORD baseAddr = 0x509B74;
LPCSTR windName = "AssaultCube";
DWORD PistolAmmoValue = NULL;
DWORD RiffleAmmoValue = NULL;
DWORD BombAmmoValue = NULL;
DWORD ArmorPointValue = NULL;
DWORD TwoHandStatusvalue = NULL;
DWORD TwoHandClipValue = NULL;
DWORD TwoHandAmmoValue = NULL;
DWORD SubMachineClipValue = NULL;
DWORD SubMachineAmmoValue = NULL;
DWORD SniperClipValue = NULL;
DWORD SniperAmmoValue = NULL;
DWORD ShoutGunClipValue = NULL;
DWORD ShoutGunAmmoValue = NULL;
DWORD RiffleClipValue = NULL;
DWORD PistolClipValue = NULL;
DWORD CarbineClipValue = NULL;
DWORD CarbineAmmoValue = NULL;
HANDLE hGame = NULL;
HWND hWind = NULL;

DWORD PistolAmmo = 0x13c;
DWORD RiffleAmmo = 0x150;
DWORD BombAmmo = 0x158;
DWORD ArmorPoint = 0xfc;
DWORD TwoHandStatus = 0x10C;
DWORD TwoHandClip = 0x134;
DWORD TwoHandAmmo = 0x15C;
DWORD SubMachineClip = 0x120;
DWORD SubMachineAmmo = 0x148;
DWORD SniperClip = 0x124;
DWORD SniperAmmo = 0x14C;
DWORD ShoutGunClip = 0x11C;
DWORD ShoutGunAmmo = 0x144;
DWORD RiffleClip = 0x128;
DWORD PistolClip = 0x114;
DWORD CarbineClip = 0x118;
DWORD CarbineAmmo = 0x140;