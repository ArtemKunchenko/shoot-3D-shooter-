#include<iostream>
#include "Weapon.h"
using namespace std;

void ShowWeapon(Weapon& weapon) { weapon.ShowWeapon(); }
void Shoot (Weapon& weapon) { weapon.Shoot(); }

int main()
{
	Shotgun shotgun;
	Shoot(shotgun);
	system("pause");
	return 0;
}