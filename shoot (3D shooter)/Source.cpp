#include<iostream>
#include<ctime>

#include "Weapon.h"
using namespace std;

void ShowWeapon(Weapon& weapon) { weapon.ShowWeapon(); }
void Shoot (Weapon& weapon) { weapon.Shoot(); }

int main()
{

	/*Pistol pistol;
	Shoot(pistol);*/
	/*Shotgun shotgun;
	Shoot(shotgun);*/
	//Knife knife;
	////ShowWeapon(knife);
	//Shoot(knife);
	Machine machine;
	Shoot(machine);
	system("pause");
	return 0;
}