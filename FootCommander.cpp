#include "FootCommander.hpp"

FootCommander::FootCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 20;
    m_type = Type::FootCommanderType;
}

uint FootCommander::getMaxHP()
{
    return MAX_HP;
}

void FootCommander::action(std::vector<std::vector<Soldier*>> &board)
{
    std::cout<<"FootCommander action"<<std::endl;
    return;
}

void FootCommander::print()
{
    printf("{(%d) FootCommander,hp: %d}",m_player_number,m_hp);
}