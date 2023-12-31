#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class Weapon
{
public:
	Weapon();
	virtual void Shoot() = 0;
	virtual void Reloading() = 0;
	virtual void ShowWeapon() = 0;
protected:
	void setType(string type) { _type = type; }
	void setAmmunition(int ammunition) { _ammunition = ammunition; }
	void setClips(int clips) { _clips = clips; }
	void setBarrelLength(int barrel_length) { _barrel_length = barrel_length; }
	void setDamage(int damage) { _damage = damage; }
	string getType() { return _type; }
	int getAmmunition() { return _ammunition; }
	int getClips() { return _clips; }
	int getBarrelLength() { return _barrel_length; }
	int getDamage() { return _damage; }
private:
	string _type;
	int _ammunition;
	int _clips;
	int _barrel_length;
	int _damage;

};

class Pistol :public Weapon
{
public:
	Pistol():Weapon() //constructor
	{
		setType("Pistol");
		setAmmunition(14);
		setClips(1);
		setBarrelLength(97);
		setDamage(300);
	};
	void ShowWeapon() override;
	void Reloading() override;
	void Shoot() override;

};
class Shotgun :public Weapon
{
public:
	Shotgun() :Weapon() //constructor
	{
		setType("Shotgun");
		setAmmunition(6);
		setClips(1);
		setBarrelLength(510);
		setDamage(700);
	};
	void ShowWeapon() override;
	void Reloading() override;
	void Shoot() override;

};
class Knife :public Weapon
{
public:
	Knife() :Weapon() //constructor
	{
		setType("Knife");
		setAmmunition(5);
		setClips(rand()%2);
		setBarrelLength(205);
		setDamage(100);
	};
	void ShowWeapon() override;
	void Reloading() override;
	void Shoot() override;

};
class Machine :public Weapon
{
public:
	Machine() :Weapon() //constructor
	{
		setType("Machine");
		setAmmunition(30);
		setClips(3);
		setBarrelLength(415);
		setDamage(1000);
	};
	void ShowWeapon() override;
	void Reloading() override;
	void Shoot() override;

};
class Chainsaw :public Weapon
{
public:
	Chainsaw() :Weapon() //constructor
	{
		setType("Chainsaw");
		setAmmunition(100);
		setClips(0);
		setBarrelLength(350);
		setDamage(600);
	};
	void ShowWeapon() override;
	void Reloading() override;
	void Shoot() override;

};