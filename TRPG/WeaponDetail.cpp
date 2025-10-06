#include "pch.h"
#include "Status.h"
#include "WeaponDetail.h"

Weapon_NONE::Weapon_NONE()
	: Weapon("주먹", 1, "왼손은 거들뿐", 0, LEVEL::NONE, ROLE::NONE)
{
	m_status = { 0,0,0 };
}

Weapon_WARRIOR_LOW::Weapon_WARRIOR_LOW()
	: Weapon("하급 대검", 2,"약간 무거워 보이는 하급 대검 ", 100, LEVEL::LOW, ROLE::WARRIROR)
{
	m_status = { 100, 20, 30 };
}

Weapon_WARRIOR_MED::Weapon_WARRIOR_MED()
	: Weapon("중급 대검",3, "좀 더 무거워 보이는 중급 대검 ", 300, LEVEL::MED, ROLE::WARRIROR)
{
	m_status = { 130, 30, 50 };
}

Weapon_WARRIOR_HIGH::Weapon_WARRIOR_HIGH()
	: Weapon("상급 대검",4, "엄청 무거워 보이는 상급 대검 ", 500, LEVEL::HIGH, ROLE::WARRIROR)
{
	m_status = { 150, 50, 70 };
}


Weapon_MAGICIAN_LOW::Weapon_MAGICIAN_LOW()
	: Weapon("하급 완드",5, "곧 부러질 것 같은 하급 완드", 100, LEVEL::LOW, ROLE::MAGICIAN)
{
	m_status = { 50, 50, 30 };
}

Weapon_MAGICIAN_MED::Weapon_MAGICIAN_MED()
	: Weapon("중급 완드",6, "적당한 중급 완드", 300, LEVEL::MED, ROLE::MAGICIAN)
{
	m_status = { 60, 70, 40 };
}

Weapon_MAGICIAN_HIGH::Weapon_MAGICIAN_HIGH()
	: Weapon("상급 완드",7, "강해보이는 상급 완드", 500, LEVEL::HIGH, ROLE::MAGICIAN)
{
	m_status = { 70, 100, 50 };
}

Weapon_THIEF_LOW::Weapon_THIEF_LOW()
	: Weapon("하급 단검",8, "나약한 하급 단검", 100, LEVEL::LOW, ROLE::THIEF)
{
	m_status = { 70, 40, 40 };
}

Weapon_THIEF_MED::Weapon_THIEF_MED()
	: Weapon("중급 단검", 9,"덜 나약한 중급 단검", 300, LEVEL::MED, ROLE::THIEF)
{
	m_status = { 80, 60, 50 };
}

Weapon_THIEF_HIGH::Weapon_THIEF_HIGH()
	: Weapon("상급 단검", 10,"강해보이는 상급 단검", 500, LEVEL::HIGH, ROLE::THIEF)
{
	m_status = { 90, 90, 60 };
}