#include "ParamedicCommander.hpp"

ParamedicCommander::ParamedicCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 0;
    m_type = Type::ParamedicCommanderType;
}

uint ParamedicCommander::getMaxHP()
{
    return MAX_HP;
}

void ParamedicCommander::action(std::vector<std::vector<Soldier*>> &board)
{
    return;
}