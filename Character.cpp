#include "Character.h"
#include <iostream>
using namespace std;
Character::Character(std::string name) {
	this->name = name; //instance of Character assigns health and hitpoints
	this->health = 100; // gives health when name is assigned
	this->hp = hp;
} //defining Character(std::string name) from .h
// instatiation period?? when object becomes instance of class (Character)

void Character::loseHealth(int hit) {//takes in int and reduces health by x amount 
	this->health -= hit;
	if (this->health < 0)
	{
		this->health = 0;// protects health from going negative
	}
	cout << "\n\n Opponent Health " << health << " points remaining";
}


void Character::Dead() {
	cout << "\n\n You are Dead Fool!!!\n";
	this->health = 0;
	cout << "\n\nHealth = " << health << "!";
	return main();
}
void Character::EndGame() {
	bool play;
	cout << "\n\nWould you like to continue?\n";
	cout << "\nEnter 1 for yes, 0 for no"<<endl;
	cin >> play;
	if (play == true) {
		cout << "\n\n\n\n\Welcome to Jumanji!!!!!!!\n\n\n\n";
		cout << "\nGet Ready for Combat.....";
	}
	else if (play == false) {

		cout << "\n\nScrew you!!";
		return Dead();
	}
	

}
void Character::main() {
	cout << "\n\nWelcome to Combat\n";
	cout << "\n\nThis is my Fight demo for OOP\n"
		"This is not for the weak\n"
		"Have Fun\n";
	cout << "You will be fighting a Grappler and a Striker"<<endl;
	system("pause");
}
int Character::getHealth() {
	return this->health;
}

int Character::attack() {
	return this->hp;
}
