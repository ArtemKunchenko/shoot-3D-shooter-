#include "Weapon.h"

void Pistol::ShowWeapon()
{
	cout << "Type: " << getType() << endl;
	cout << "Quantity of ammunition: " << getAmmunition() << endl;
	cout << "Quantity of aditional clips: " << getClips() << endl;
	cout << "Barrel legth: " << getBarrelLength() <<" mm" << endl;
	cout << "Power of damage: " << getDamage() << " points" << endl;
}

void Pistol::Reloading()
{
	if (getClips() > 0)
	{
		setAmmunition(14);
		setClips(getClips() - 1);
	}
}

void Pistol::Shoot()
{
	while (true)
	{
		
		if (getAmmunition()>0)
		{
			system("cls");
			cout << getType() << endl;
			cout << "Ammunition: " << getAmmunition() << endl;
			cout << "Aditional clips: " << getClips() << endl;
			cout << "\n\t\t\t PLAYER IS SHOOTING!!!\n";
			setAmmunition(getAmmunition() - 1);
			Sleep(1000);
			
		}
		else
		{
			Reloading();
			if (getClips() < 0 || getAmmunition() == 0) break;
			for (int i = 3; i >0; i--)
			{
				system("cls");
				cout << "\t\t\tRELOADING OF WEAPON!!!" << " (" << i << ")";
				Sleep(1000);
			}
			cout << endl;
		}
		system("cls");
		cout << getType() << endl;
		cout << "Ammunition: " << getAmmunition() << endl;
		cout << "Aditional clips: " << getClips() << endl;
		cout << "\nPISTOL IS EMPTY!!!\n";
	}
}

Weapon::Weapon()
{
	_type = "";
	_ammunition = 0;
	_clips = 0;
	_barrel_length = 0;
	_damage = 0;
}

void Shotgun::ShowWeapon()
{
	cout << "Type: " << getType() << endl;
	cout << "Quantity of ammunition: " << getAmmunition() << endl;
	cout << "Quantity of aditional clips: " << getClips() << endl;
	cout << "Barrel legth: " << getBarrelLength() << " mm" << endl;
	cout << "Power of damage: " << getDamage() << " points" << endl;
}

void Shotgun::Reloading()
{
	if (getClips() > 0)
	{
		setAmmunition(6);
		setClips(getClips() - 1);
	}
}

void Shotgun::Shoot()
{
	while (true)
	{

		if (getAmmunition() > 0)
		{
			system("cls");
			cout << getType() << endl;
			cout << "Ammunition: " << getAmmunition() << endl;
			cout << "Aditional clips: " << getClips() << endl;
			cout << "\n\t\t\t PLAYER IS SHOOTING!!!\n";
			setAmmunition(getAmmunition() - 1);
			Sleep(1000);

		}
		else
		{
			Reloading();
			if (getClips() < 0 || getAmmunition() == 0) break;
			for (int i = 6; i > 0; i--)
			{
				system("cls");
				cout << "\t\t\tRELOADING OF WEAPON!!!" << " (" << i << ")";
				Sleep(1000);
			}
			cout << endl;
		}
		system("cls");
		cout << getType() << endl;
		cout << "Ammunition: " << getAmmunition() << endl;
		cout << "Aditional clips: " << getClips() << endl;
		cout << "\nSHOTGUN IS EMPTY!!!\n";
	}
}
