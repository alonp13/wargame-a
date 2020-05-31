#include "Paramedic.hpp"

Paramedic::Paramedic(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 0;
    m_type = Type::ParamedicType;
}

uint Paramedic::getMaxHP()
{
    return MAX_HP;
}

void Paramedic::action(std::vector<std::vector<Soldier*>> &board)
{
    
    return;
}

void Paramedic::print()
{
    printf("{(%d) Paramedic,hp: %d}",m_player_number,m_hp);
}