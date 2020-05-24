#pragma once
#include "Soldier.hpp"

class Paramedic : public Soldier
{
    public:
        static const uint MAX_HP = 100; 
        
        Paramedic() {};
        Paramedic(uint player_number);
        virtual void action(std::vector<std::vector<Soldier*>> &board);
        virtual uint getMaxHP();
};