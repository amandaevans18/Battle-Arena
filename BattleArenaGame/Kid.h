#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Kid
{
public:
	Kid();
	~Kid();

	void addKid();
	void removeKid();
	void takeDamage(int damage);
	bool isAlive();
	string getPersonName();
	string getType();
	string getPhrase();
	int getCoolnessLevel();
	int getLameLevel();
	int getHealth();
	
protected:
	string personName;
	string type;
	string phrase;
	int coolnessLevel;//only up to five
	int lameLevel;
	int health;//max out at 100

};




