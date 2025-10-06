#include "pch.h"
#include "Monster.h"
#include "Item.h"

MonsterData Monster::Data[(int)LEVEL::MAX] =
{
	{"",Status(0,0,0)},
	{"슬라임", Status(50,50,3)},
	{"고블린",Status(100,70,10)},
	{"스카스",Status(200,100,20)}
};

Monster::Monster(LEVEL _level)
	:Character(Data[(int)_level].name), m_iLevel((int)_level)
{
}

Monster::~Monster()
{
	Release();
}

void Monster::Initialize()
{
	m_status = Data[m_iLevel].status;
}

void Monster::Update()
{
}


void Monster::Release()
{
}

void Monster::Render()
{
	cout << "\n\t\t[ 몬스터 : " << m_szName << " ] \n";
	cout << "\t    체력 : " << m_status.GetHp() << "\t공격력 : " << m_status.GetAttack() << "\n";
	cout << "\n================================================\n";
}
