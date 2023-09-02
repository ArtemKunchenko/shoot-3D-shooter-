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

void Knife::ShowWeapon()
{
	cout << "Type: " << getType() << endl;
	cout << "Player can attack only: " << getAmmunition() <<" sec." << endl;
	cout << "Margin of safety: " << getClips() << endl;
	cout << "Legth of blade: " << getBarrelLength() << " mm" << endl;
	cout << "Power of damage: " << getDamage() << " points" << endl;
}

void Knife::Reloading()
{
	if (getClips() > 0)
	{
		setAmmunition(5);
		setClips(getClips() - 1);
	}
}

void Knife::Shoot()
{
	while (true)
	{

		if (getAmmunition() > 0)
		{
			system("cls");
			cout << getType() << endl;
			cout << "Player will stop attack after " << getAmmunition()<<" sec." << endl;
			cout << "\n\t\t\t PLAYER IS ATTACKING!!!\n";
			setAmmunition(getAmmunition() - 1);
			Sleep(1000);

		}
		else
		{
			Reloading();
			if (getClips() < 0 || getAmmunition() == 0) break;
			for (int i = 5; i > 0; i--)
			{
				system("cls");
				cout << "\t\t\tPLAYER IS TIRED!!! NEW ATTACK AFTER" << " (" << i << ")"<<"sec.";
				Sleep(1000);
			}
			cout << endl;
		}
		system("cls");
		cout << getType() <<" is broken!!!" << endl;
		
	}
}

void Machine::ShowWeapon()
{
	cout << "Type: " << getType() << endl;
	cout << "Quantity of ammunition: " << getAmmunition() << endl;
	cout << "Quantity of aditional clips: " << getClips() << endl;
	cout << "Barrel legth: " << getBarrelLength() << " mm" << endl;
	cout << "Power of damage: " << getDamage() << " points" << endl;
}

void Machine::Reloading()
{
	if (getClips() > 0)
	{
		setAmmunition(30);
		setClips(getClips() - 1);
	}
}

void Machine::Shoot()
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
			Sleep(100);

		}
		else
		{
			Reloading();
			if (getClips() < 0 || getAmmunition() == 0) break;
			for (int i = 3; i > 0; i--)
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
		cout << "\nMACHINE IS EMPTY!!!\n";
	}
}
