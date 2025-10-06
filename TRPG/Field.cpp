#include "pch.h"
#include "Field.h"
#include "Player.h"
#include "Monster.h"

Field::Field(Player* _player) : m_pPlayer(_player)
{
}

Field::~Field()
{
}

void Field::Initialize()
{
	m_pMonster = new Monster(LEVEL::LOW);
}
	
RETURN_STATE Field::Update()
{

}

void Field::Render()
{

}
void Field::Release()
{
	SAFE_DELETE(m_pMonster);
}

void Field::SetPlayer(Player* _player)
{
	if (_player) m_pPlayer = _player;
}
