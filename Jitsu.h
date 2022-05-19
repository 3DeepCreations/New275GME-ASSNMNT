#pragma once
#include "Character.h"
class Jitsu :
    public Character
{
public:
    Jitsu(std::string name);
    string getHair(); //cannot call from base (Character) - Getter
    void setHair(std::string int_ht);
    void BeatDown();
    void Beat();
   
};

