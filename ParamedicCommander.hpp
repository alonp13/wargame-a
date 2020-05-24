#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic
{
    public:
        static const uint MAX_HP = 200; 

        ParamedicCommander(uint player_number);
        virtual void action(std::vector<std::vector<Soldier*>> &board);
        virtual uint getMaxHP();
};