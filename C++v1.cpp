
// C++v1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Character.h"
#include "Jitsu.h"
#include "Tai.h"
#include <ctime>
#include <cstdlib>
using namespace std;
int determineAttack() {
    int test = rand() % 10;
    return (test > 4) ? 1 : 0;
}

void PlayGame() {
    Character ch("Daddys Girl");
    Jitsu gt("Grappler");
    gt.setHair("Fire Red");
    Tai at("Striker");
    at.setHair("Matte Black");

    ch.main();
    ch.EndGame();
    system("pause");
    cout << "\n\nI am the Grappler punk";
    gt.BeatDown();
    cout << "\n\nMy health is \n"
        << gt.getHealth() << ".\n";
    cout << "\n\nMy HP is \n"
        << gt.attack() << ".\n";
    system("pause");
    

    cout << "\n\nI am the Striker and I do not take shit";
    at.ThrowKicks();
    cout << "\n\nMy health is \n"
        << at.getHealth() << ".\n";
    cout << "\n\nMy HP is \n"
        << at.attack() << ".\n";
    system("pause");
    
    int round = 1;
    while (true) {
        cout << "\nRound " << round << ", Fight!!!" << endl;
        if (determineAttack()) {
            cout << "Grappler is attacking; Hes whooping that AZZ!!! " << endl;
            gt.loseHealth(at.attack());
            at.loseHealth(gt.attack());
        }
        else {
            cout << "Striker is attacking; Take that beat down!!! " << endl;
            at.loseHealth(gt.attack());
            gt.loseHealth(at.attack());
        }
        if (gt.getHealth() <= 0) {
            cout << "\nGrappler Fn' died man!!" << endl;
            ch.Dead();
            break;
        }
        if (at.getHealth() <= 0) {
            cout << "\nStriker Fn' died man!!" << endl;
            ch.Dead();
            break;
        }
        system("pause");
        cout << "\nStriker's health is " << at.getHealth() << "." << endl;
        cout << "\nGrappler's health is " << gt.getHealth() << "." << endl;
    }

    gt.Beat();
}
int main()
{
    
    char answer;
    srand(time(0));

    while (true) {
        PlayGame();
        cout << "\nWould you like to play again?\n"
            "Enter y for yes.\n";
        cin >> answer;
        if (answer != 'y') {
            break;
            cout << "\n Quitter!!!!!\n";
        }
       
    }
    
   
    
    
}

