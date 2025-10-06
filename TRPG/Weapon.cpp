#include "pch.h"
#include "Weapon.h"

Weapon::Weapon(const char* _name,int _id, const char* _desc, int _price, LEVEL _level, ROLE _role)
	: Equipment(_name, _id, _desc, _price,_level,TYPE::WEAPON), m_eRole(_role)
{
}

Weapon::~Weapon()
{
	Release();
}

void Weapon::Initialize()
{

}

void Weapon::Update()
{

}

void Weapon::Release()
{

}

void Weapon::Render()
{
	cout << "\n\t\t\t\t[ ���� ���� ��� ]\n";
	cout << "\t\t\t\t     < " << m_szName << " > ";
}

const char* Weapon::GetRoleName()
{
	switch (m_eRole)
	{
	case ROLE::NONE: return "����";
	case ROLE::WARRIROR: return "����";
	case ROLE::MAGICIAN: return "������";
	case ROLE::THIEF: return "����";
	default:
		break;
	}
	return "��";
}
