#pragma once
#include <iostream>
#include <vector>


typedef enum Type {
    FootSoldierType,
    FootCommanderType,
    SniperType,
    SniperCommanderType,
    ParamedicType,
    ParamedicCommanderType
} Type;

class Soldier 
{
    protected:
        Type m_type;
        uint m_player_number;
        uint m_hp;
        uint m_damage;
        //std::pair<int,int> m_location;

    public:
        Soldier() {};
        virtual void action(std::vector<std::vector<Soldier*>> &board) = 0;
        virtual uint getMaxHP() = 0;

       // void setLocation(std::pair<int,int> &location) { m_location = location; }
        Type getType() { return m_type; } 

};