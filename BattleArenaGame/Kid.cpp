#include "Kid.h"
Kid::Kid()
{
}

Kid::~Kid()
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

