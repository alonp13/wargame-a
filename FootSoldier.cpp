#include "FootSoldier.hpp"

FootSoldier::FootSoldier(uint player_number)
{
    m_player_number = player_number;
    m_hp = MAX_HP;
    m_damage = 10;
    m_type = Type::FootSoldierType;
}

uint FootSoldier::getMaxHP()
{
    return MAX_HP;
}

void FootSoldier::action(std::vector<std::vector<Soldier*>> &board)
{
    
    return;
}

