#include "pch.h"
#include "Armor.h"

Armor::Armor(const char* _name, int _id, const char* _desc, int _price, LEVEL _level, PART _part)
	:Equipment(_name, _id, _desc, _price, _level, TYPE::ARMOR), m_part(_part)
{
}

Armor::~Armor()
{
	Release();
}

void Armor::Initialize()
{

}

void Armor::Update()
{

}

void Armor::Release()
{

}

void Armor::Render()
{
	cout << "\t\t\t\t     < " << m_szName << " > ";
}