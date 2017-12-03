#include "Poke.h"

Poke::Poke(int ID, int hp, int attack, int defense, int speed, int special, int type1, int type2)
{
	this->ID = ID;
	this->name = name;
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

int Poke::getType1()
{
	return type1;
}

int Poke::getType2()
{
	return type2;
}
