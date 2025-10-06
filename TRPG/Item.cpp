#include "pch.h"
#include "Item.h"
#include "Character.h"

Item::Item(const char* _name,int _id, const char* _desc, int _price, LEVEL _level, TYPE _type)
	:Object(_name), m_iId(0) , m_szDescription(_desc), m_iPrice(_price), m_level(_level), m_type(_type)
	,m_pCharacter (nullptr)
{
}

Item::~Item()
{
	Release();
}


void Item::Initialize()
{
}

void Item::Update()
{
}

void Item::Render()
{
}


void Item::Release()
{
}

void Item::SetCharacter(Character* _char)
{
	if (_char == nullptr) return;
	m_pCharacter = _char;
}
