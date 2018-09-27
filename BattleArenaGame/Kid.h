#pragma once
#include<iostream>
#include<string>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class Kid
{
public:
	Kid();
	~Kid();

	void takeDamage(int damage);
	bool isAlive();
	int getCoolnessLevel();
	int getLameLevel();
	int getHealth();
	
protected:
	int coolnessLevel;//only up to five
	int lameLevel;
	int health;//max out at 100

};




