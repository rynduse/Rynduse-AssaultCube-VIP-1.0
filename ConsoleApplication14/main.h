#pragma once
#include <Windows.h>

using namespace std;

void infinity_ammo()
{
	SetConsoleTitle(L"Rynduse AssaultCube VIP 1.0");
	hWind = FindWindowA(NULL, windName);

	if (hWind)
	{
		GetWindowThreadProcessId(hWind, &pid);
		if (pid != NULL)
		{
			hGame = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
			if (hGame != INVALID_HANDLE_VALUE)
			{
				PistolAmmoValue = PistolAmmoFunc(hGame, baseAddr, PistolAmmo, 1);
				RiffleAmmoValue = RiffleAmmoFunc(hGame, baseAddr, RiffleAmmo, 1);
				BombAmmoValue = BombAmmoFunc(hGame, baseAddr, BombAmmo, 1);
				ArmorPointValue = ArmorPointFunc(hGame, baseAddr, ArmorPoint, 1);
				TwoHandStatusvalue = TwoHandStatusFunc(hGame, baseAddr, TwoHandStatus, 1);
				TwoHandClipValue = TwoHandClipFunc(hGame, baseAddr, TwoHandClip, 1);
				TwoHandAmmoValue = TwoHandAmmoFunc(hGame, baseAddr, TwoHandAmmo, 1);
				SubMachineClipValue = SubMachineClipFunc(hGame, baseAddr, SubMachineClip, 1);
				SubMachineAmmoValue = SubMachineAmmoFunc(hGame, baseAddr, SubMachineAmmo, 1);
				SniperClipValue = SniperClipFunc(hGame, baseAddr, SniperClip, 1);
				SniperAmmoValue = SniperAmmoFunc(hGame, baseAddr, SniperAmmo, 1);
				ShoutGunClipValue = ShoutGunClipFunc(hGame, baseAddr, ShoutGunClip, 1);
				ShoutGunAmmoValue = ShoutGunAmmoFunc(hGame, baseAddr, ShoutGunAmmo, 1);
				RiffleClipValue = RiffleClipFunc(hGame, baseAddr, RiffleClip, 1);
				PistolClipValue = PistolClipFunc(hGame, baseAddr, PistolClip, 1);
				CarbineClipValue = CarbineClipFunc(hGame, baseAddr, CarbineClip, 1);
				CarbineAmmoValue = CarbineAmmoFunc(hGame, baseAddr, CarbineAmmo, 1);




				while (true)
				{
					//-------------------------------Pistol Start Here-------------------------//
					ReadProcessMemory(hGame, (void*)PistolAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)PistolClipValue, &Value2, sizeof(Value2), 0);
					cout << "PistolAmmo = " << Value1 << "/" << Value2 << endl;
					if (GetKeyState(VK_SHIFT) & 0x8000)
					{
						WriteProcessMemory(hGame, (void*)PistolAmmoValue, &infinite, sizeof(infinite), 0);
					}
					//-------------------------------Pistol End Here---------------------------//

					//-------------------------------Riffle Start Here-------------------------//
					ReadProcessMemory(hGame, (void*)RiffleAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)RiffleClipValue, &Value2, sizeof(Value2), 0);
					cout << "RiffleAmmo = " << Value1 << "/" << Value2 << endl;
					//-------------------------------Riffle End Here---------------------------//

					//-------------------------------Bomb Start Here---------------------------//
					ReadProcessMemory(hGame, (void*)BombAmmoValue, &Value1, sizeof(Value1), 0);
					cout << "BombAmmo = " << Value1 << endl;
					//-------------------------------Bomb End Here-----------------------------//

					//-------------------------------Armor Start Here--------------------------//
					ReadProcessMemory(hGame, (void*)ArmorPointValue, &Value1, sizeof(Value1), 0);
					cout << "ArmorPoint = " << Value1 << endl;
					//-------------------------------Armor End Here----------------------------//

					//-------------------------------TwoHand Start Here------------------------//
					ReadProcessMemory(hGame, (void*)TwoHandStatusvalue, &Value1, sizeof(Value1), 0);
					if (Value1 == 1)
					{
						cout << "TwoHandPistol = [ON]" << endl;
					}
					else
					{
						cout << "TwoHandPistol = [OFF]" << endl;
					}
					ReadProcessMemory(hGame, (void*)TwoHandAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)TwoHandClipValue, &Value2, sizeof(Value2), 0);
					cout << "TwoHandAmmo = " << Value1 << "/" << Value2 << endl;
					//-------------------------------TwoHand End Here--------------------------//

					//-----------------------------SubMachine Start Here-----------------------//
					ReadProcessMemory(hGame, (void*)SubMachineAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)SubMachineClipValue, &Value2, sizeof(Value2), 0);
					cout << "SubMachineAmmo = " << Value1 << "/" << Value2 << endl;
					//-----------------------------SubMachine End Here-------------------------//

					//-------------------------------Sniper Start Here-------------------------//
					ReadProcessMemory(hGame, (void*)SniperAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)SniperClipValue, &Value2, sizeof(Value2), 0);
					cout << "SniperAmmo = " << Value1 << "/" << Value2 << endl;
					//-------------------------------Sniper End Here---------------------------//

					//-----------------------------ShoutGun Start Here-------------------------//
					ReadProcessMemory(hGame, (void*)ShoutGunAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)ShoutGunClipValue, &Value2, sizeof(Value2), 0);
					cout << "ShoutGunAmmo = " << Value1 << "/" << Value2 << endl;
					//-----------------------------ShoutGun End Here---------------------------//

					//------------------------------Carbine Start Here-------------------------//
					ReadProcessMemory(hGame, (void*)CarbineAmmoValue, &Value1, sizeof(Value1), 0);
					ReadProcessMemory(hGame, (void*)CarbineClipValue, &Value2, sizeof(Value2), 0);
					cout << "CarbineAmmo = " << Value1 << "/" << Value2 << endl;
					//------------------------------Carbine End Here---------------------------//

					Sleep(50);
					system("CLS");
				}
			}
			else std::cout << "Could Not Open The Game's Process !" << std::endl;
		}
	}
	else std::cout << "Could Not Find The Game Window !" << std::endl;
}