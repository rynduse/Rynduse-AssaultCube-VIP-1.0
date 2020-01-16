#pragma once
#include <Windows.h>
#include "offset.h"

DWORD PistolAmmoFunc(HANDLE hG, DWORD base, DWORD PistolAmmo, int len);
DWORD RiffleAmmoFunc(HANDLE hG, DWORD base, DWORD RiffleAmmo, int len);
DWORD BombAmmoFunc(HANDLE hG, DWORD base, DWORD BombAmmo, int len);
DWORD ArmorPointFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len);
DWORD TwoHandStatusFunc(HANDLE hG, DWORD base, DWORD TwoHandStatus, int len);
DWORD TwoHandClipFunc(HANDLE hG, DWORD base, DWORD TwoHandClip, int len);
DWORD TwoHandAmmoFunc(HANDLE hG, DWORD base, DWORD TwoHandAmmo, int len);
DWORD SubMachineClipFunc(HANDLE hG, DWORD base, DWORD SubMachineClip, int len);
DWORD SubMachineAmmoFunc(HANDLE hG, DWORD base, DWORD SubMachineAmmo, int len);
DWORD SniperClipFunc(HANDLE hG, DWORD base, DWORD SniperClip, int len);
DWORD SniperAmmoFunc(HANDLE hG, DWORD base, DWORD SniperAmmo, int len);
DWORD ShoutGunClipFunc(HANDLE hG, DWORD base, DWORD ShoutGunClip, int len);
DWORD ShoutGunAmmoFunc(HANDLE hG, DWORD base, DWORD ShoutGunAmmo, int len);
DWORD RiffleClipFunc(HANDLE hG, DWORD base, DWORD RiffleClip, int len);
DWORD PistolClipFunc(HANDLE hG, DWORD base, DWORD PistolClip, int len);
DWORD CarbineClipFunc(HANDLE hG, DWORD base, DWORD CarbineClip, int len);
DWORD CarbineAmmoFunc(HANDLE hG, DWORD base, DWORD CarbineAmmo, int len);

DWORD PistolAmmoFunc(HANDLE hG, DWORD base, DWORD PistolAmmo, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + PistolAmmo;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD RiffleAmmoFunc(HANDLE hG, DWORD base, DWORD RiffleAmmo, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + RiffleAmmo;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD BombAmmoFunc(HANDLE hG, DWORD base, DWORD BombAmmo, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + BombAmmo;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD ArmorPointFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD TwoHandStatusFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD TwoHandClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD TwoHandAmmoFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD SubMachineClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD SubMachineAmmoFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD SniperClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD SniperAmmoFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD ShoutGunClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD ShoutGunAmmoFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD RiffleClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD PistolClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD CarbineClipFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}

DWORD CarbineAmmoFunc(HANDLE hG, DWORD base, DWORD ArmorPoint, int len)
{
	DWORD  tmpPtr;
	DWORD ResAddr;


	ReadProcessMemory(hG, (void*)base, &tmpPtr, sizeof(tmpPtr), 0);
	ResAddr = tmpPtr + ArmorPoint;
	ReadProcessMemory(hG, (void*)ResAddr, &tmpPtr, sizeof(tmpPtr), 0);

	return ResAddr;

}