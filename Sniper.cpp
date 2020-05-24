#include "Sniper.hpp"

Sniper::Sniper(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 50;
    m_type = Type::SniperType;
}

uint Sniper::getMaxHP()
{
    return MAX_HP;
}


void Sniper::action(std::vector<std::vector<Soldier*>> &board)
{
    return;
}
