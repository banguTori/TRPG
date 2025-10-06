#include "pch.h"
#include "Status.h"

Status::Status(int _maxHp, int _attack, int _def)
	: m_iMaxHp(_maxHp), m_iHp(_maxHp), m_iAttack(_attack), m_iDefence(_def)
{
}

Status::~Status()
{
}
