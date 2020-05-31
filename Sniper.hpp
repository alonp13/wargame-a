#pragma once
#include "Soldier.hpp"

class Sniper : public Soldier
{
    public:
        static const uint MAX_HP = 100; 
        
        Sniper() {};
        Sniper(uint player_number);
        virtual void action(std::vector<std::vector<Soldier*>> &board);
        virtual uint getMaxHP();
        virtual void print();

};