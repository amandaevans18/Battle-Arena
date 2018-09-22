#include "Kid.h"
Kid::Kid()
{
}

Kid::~Kid()
{
}

void Kid::addKid()
{
}

void Kid::removeKid()
{
}


void Kid::takeDamage(int damage)
{
	health -= coolnessLevel;
}

bool Kid::isAlive()
{
	if (health < 0) 
	{
		return false;
	}
	else
	{
		return true;
	}
}

string Kid::getPersonName()
{
	return personName;
}

string Kid::getType()
{
	return type;
}

string Kid::getPhrase()
{
	return phrase;
}

int Kid::getCoolnessLevel()
{
	return coolnessLevel;
}

int Kid::getLameLevel()
{
	return lameLevel;
}

int Kid::getHealth()
{
	return health;
}
