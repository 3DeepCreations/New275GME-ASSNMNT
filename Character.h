#pragma once
#include <string>
#include <iostream>
using namespace std;

class GameStructure {
public:
	string fighter = "Fighter";
	virtual string getHair(string ht)  = 0; //cannot call from base (GameStructure) - Getter
	virtual void setHair(int ht)  = 0;// " " - Setter
	


};

class Character : public GameStructure
{
public:

	Character(string name);//constructor - tells us what to do when we create new object of the calss Character - DECLARATION - no function or to do 
	void setHair(int ht) {
		hair = ht;
		cout << "\n\nYour hair is " << ht << "...";
	}
	string getHair(string ht) {
		hair = hair;
		return ht;
	}
	int attack();
	void loseHealth(int hit);// implemented in base class can be called from base (Character)
	int getHealth();
	
	void Dead();
	void EndGame();
	void main();
	
private:
	string name;
	int hair;
	int health;
	int Pubes;

protected://anytime this data is available in base clss is avail in child class - any inheriting class can access the data
	string ht;//hairtype
	int hp;//hitpoints
};

