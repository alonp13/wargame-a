#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldier
{
    public:
        static const uint MAX_HP = 100; 
        
        FootSoldier() {};
        FootSoldier(uint player_number);
        virtual void action(std::vector<std::vector<Soldier*>> &board);
        virtual uint getMaxHP();
};