#include "SniperCommander.hpp"

SniperCommander::SniperCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 100;
    m_type = Type::SniperCommanderType;
}

uint SniperCommander::getMaxHP()
{
    return MAX_HP;
}

void SniperCommander::action(std::vector<std::vector<Soldier*>> &board)
{
    return;
}

void SniperCommander::print()
{
    printf("{(%d) SniperCommander,hp: %d}",m_player_number,m_hp);
}