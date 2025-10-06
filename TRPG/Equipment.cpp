#include "pch.h"
#include "Equipment.h"
#include "Character.h"

Equipment::Equipment(const char* _name, int _id, const char* _desc, int _price, LEVEL _level, TYPE _type)
	: Item(_name, _id, _desc, _price, _level, _type)
{
}

Equipment::~Equipment()
{

}

void Equipment::Equip()
{
	if (!m_pCharacter) return;
	m_pCharacter->GetStatus().AddStat(m_status);
	m_pCharacter->GetStatus().InitHp();
}

void Equipment::UnEquip()
{
	if (!m_pCharacter) return;
	m_pCharacter->GetStatus().SubtractStat(m_status);
	m_pCharacter->GetStatus().InitHp();
}
