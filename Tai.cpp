#include "Tai.h"

Tai::Tai(string name) : Character(name) {
	this->hp = 15;
};

std::string Tai::getHair() {
	return this->ht;
}
void Tai::setHair(string in_ht) {
	this->ht = in_ht;
}
void Tai::ThrowKicks() {
	cout << "\n\nI throw kicks and bows!!\n\n";
	cout << "You Suck...\n\n";
}