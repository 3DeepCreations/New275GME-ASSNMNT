#include "Jitsu.h"

Jitsu::Jitsu(std::string name):Character(name) {
	this->hp = 25;
}

std::string Jitsu::getHair() {
	return this->ht;
}
void Jitsu::setHair(std::string in_ht) {
	this->ht = in_ht;
}
void Jitsu::BeatDown() {
	cout << "\n\nI whoop azz and take names!!\n\n";
	cout << "Just quit already....!!!\n\n";
	
}
void Jitsu::Beat() {
	cout << "\n\nYou hit me man ";
	
}
