#include "pch.h"
#include "Status.h"
#include "WeaponDetail.h"

Weapon_NONE::Weapon_NONE()
	: Weapon("�ָ�", 1, "�޼��� �ŵ��", 0, LEVEL::NONE, ROLE::NONE)
{
	m_status = { 0,0,0 };
}

Weapon_WARRIOR_LOW::Weapon_WARRIOR_LOW()
	: Weapon("�ϱ� ���", 2,"�ణ ���ſ� ���̴� �ϱ� ��� ", 100, LEVEL::LOW, ROLE::WARRIROR)
{
	m_status = { 100, 20, 30 };
}

Weapon_WARRIOR_MED::Weapon_WARRIOR_MED()
	: Weapon("�߱� ���",3, "�� �� ���ſ� ���̴� �߱� ��� ", 300, LEVEL::MED, ROLE::WARRIROR)
{
	m_status = { 130, 30, 50 };
}

Weapon_WARRIOR_HIGH::Weapon_WARRIOR_HIGH()
	: Weapon("��� ���",4, "��û ���ſ� ���̴� ��� ��� ", 500, LEVEL::HIGH, ROLE::WARRIROR)
{
	m_status = { 150, 50, 70 };
}


Weapon_MAGICIAN_LOW::Weapon_MAGICIAN_LOW()
	: Weapon("�ϱ� �ϵ�",5, "�� �η��� �� ���� �ϱ� �ϵ�", 100, LEVEL::LOW, ROLE::MAGICIAN)
{
	m_status = { 50, 50, 30 };
}

Weapon_MAGICIAN_MED::Weapon_MAGICIAN_MED()
	: Weapon("�߱� �ϵ�",6, "������ �߱� �ϵ�", 300, LEVEL::MED, ROLE::MAGICIAN)
{
	m_status = { 60, 70, 40 };
}

Weapon_MAGICIAN_HIGH::Weapon_MAGICIAN_HIGH()
	: Weapon("��� �ϵ�",7, "���غ��̴� ��� �ϵ�", 500, LEVEL::HIGH, ROLE::MAGICIAN)
{
	m_status = { 70, 100, 50 };
}

Weapon_THIEF_LOW::Weapon_THIEF_LOW()
	: Weapon("�ϱ� �ܰ�",8, "������ �ϱ� �ܰ�", 100, LEVEL::LOW, ROLE::THIEF)
{
	m_status = { 70, 40, 40 };
}

Weapon_THIEF_MED::Weapon_THIEF_MED()
	: Weapon("�߱� �ܰ�", 9,"�� ������ �߱� �ܰ�", 300, LEVEL::MED, ROLE::THIEF)
{
	m_status = { 80, 60, 50 };
}

Weapon_THIEF_HIGH::Weapon_THIEF_HIGH()
	: Weapon("��� �ܰ�", 10,"���غ��̴� ��� �ܰ�", 500, LEVEL::HIGH, ROLE::THIEF)
{
	m_status = { 90, 90, 60 };
}