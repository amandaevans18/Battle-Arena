#include "CoolKids.h"
#include"Losers.h"


//the basic loop but very wrong in all ways....!
int main()
{
	string lamePhrases[10]{"Nerd power","Being cool sucks","Must suck to be dumb","your coolness doesnt get good grades","being cool is overated","wheres the 4.0 tho","ignorance is bliss" ,"define imbecile" ,"can you maybe pronouce that right.." ,"Maybe uh read a bit and get back to me"};
	string coolPhrases[10]{"It's lit without you","You're just super duper cool","If only you were cool" ,"jk" ,"huh very... nice","tell me about your life oh wait","Must be lonely" ,"What will happen in your life" ,"Reading how cool.." ,"At least I can have a social life" };
	CoolKids squad[5];
	Losers group[5];
	int squadSize = 5;
	bool gameGo = true;
	int nextGroup = 0;
	int nextSquad = 0;
	int randomNumber = 0;
	srand(time(NULL));
	cout << "A squad of Cool kids walks up to some Losers and start talking trash" << endl;
	// Attack (insult) each other until only one team has any health left
	while (gameGo)
	{
		if (squad->isAlive()) //checking to see if cool kids are alive
		{
			for (size_t i = 0; i < squadSize; i++) // go through the squad
			{
				randomNumber = rand() % 10;
				int damage = rand() % squad[i].getCoolnessLevel();
				// each cool kid will insult the first loser in the group with a random phrase in the list
				cout << "A cool kid insults a loser with " <<coolPhrases[randomNumber] << endl;
				cout << "That hit the loser for "<< damage << endl;
				//find coolness level to do attack(or lameness lvl)
				if (group[0 + nextGroup].isAlive())
				{
					std::cout << "Loser took damage" << std::endl;
					group[0 + nextGroup].takeDamage(damage);
				}
				else if (!group[0 + nextGroup].isAlive())
				{
					nextGroup++;
					std::cout << "The Loser is crying" << std::endl;
				}
			}
		}
		if (group->isAlive()) // if there's at least one loser alive
		{
			for (size_t i = 0; i < squadSize; i++) // loop through losers
			{
				randomNumber = rand() % 10;
				int damageForLoser = rand() % group[i].getLameLevel();
				cout << "A loser insults a cool kid with " << lamePhrases[randomNumber] << endl;
				cout << "That hit the cool kid for " << damageForLoser << endl;
				//the losers loop
				if (squad[0 + nextSquad].isAlive())
				{
					cout << "Cool kid took the insult" << endl;
					squad[0 + nextSquad].takeDamage(damageForLoser);
				}
				else if (!squad[0 + nextSquad].isAlive())
				{
					nextSquad++;
					cout << "The cool kid is crying." << endl;
				}

			}
		}
		if (!group->isAlive())
		{
			cout << "The Cool Kids win." << endl;
			gameGo = false;
		}
		if (!squad->isAlive())
		{
			cout << "The Losers win." << endl;
			gameGo = false;
		}
	}
	system("PAUSE");

	return 0;
}