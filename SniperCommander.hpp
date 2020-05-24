#pragma once
#include "Sniper.hpp"

class SniperCommander : public Sniper
{
    public:
        static const uint MAX_HP = 120; 

        SniperCommander(uint player_number);
        void action(std::vector<std::vector<Soldier*>> &board);
        uint getMaxHP();
};