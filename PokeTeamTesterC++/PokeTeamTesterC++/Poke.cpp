#include "Poke.h"
//simple pokemon class with basic getters for normal pokemon stats, as well as types and name
Poke::Poke(int ID, string name, int hp, int attack, int defense, int speed, int special, int type1, int type2)
{
	this->ID = ID;
	this->name = name;
	this->hp = hp;
	this->attack = attack;
	this->defense = defense;
	this->speed = speed;
	this->special = special;
	this->type1 = type1;
	this->type2 = type2;
}

int Poke::getID()
{
	return ID;
}

string Poke::getName()
{
	return name;
}

int Poke::getHP()
{
	return hp;
}

int Poke::getAttack()
{
	return attack;
}

int Poke::getDefense()
{
	return defense;
}

int Poke::getSpeed()
{
	return speed;
}

int Poke::getSpecial()
{
	return special;
}

int Poke::getType1()
{
	return type1;
}

int Poke::getType2()
{
	return type2;
}
