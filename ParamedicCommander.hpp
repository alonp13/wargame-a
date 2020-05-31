#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic
{
    public:
        static const uint MAX_HP = 200; 

        ParamedicCommander(uint player_number);
        void action(std::vector<std::vector<Soldier*>> &board);
        uint getMaxHP();
        void print();
};