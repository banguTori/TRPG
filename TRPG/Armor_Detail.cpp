#include "pch.h"
#include "Armor_Detail.h"


Armor_HELMET_LOW::Armor_HELMET_LOW()
	:Armor("�ϱ� ����",100, "�� �μ������� �ϱ� ����", 100, LEVEL::LOW, PART::HELMET)
{
	m_status = { 8, 0, 6 };
}

Armor_HELMET_MED::Armor_HELMET_MED()
	:Armor("�߱� ����",101, "������ ������ �Ͱ��� �߱� ����", 250, LEVEL::MED, PART::HELMET)
{
	m_status = { 15, 3, 10 };
}

Armor_HELMET_HIGH::Armor_HELMET_HIGH()
	:Armor("��� ����",102, "ưư�� ��� ����", 500, LEVEL::HIGH, PART::HELMET)
{
	m_status = { 25, 8, 15 };
}

Armor_CHEST_LOW::Armor_CHEST_LOW()
	:Armor("�ϱ� ����",103, "�Ծ �ǳ����� ����", 100, LEVEL::LOW, PART::CHEST)
{
	m_status = { 10,0,10 };
}

Armor_CHEST_MED::Armor_CHEST_MED()
	:Armor("�߱� ����",104, "�� ưư�� �߱� ����", 300, LEVEL::MED, PART::CHEST)
{
	m_status = { 15, 3, 15 };
}

Armor_CHEST_HIGH::Armor_CHEST_HIGH()
	:Armor("��� ����",105, "���غ��̴� ��� ����", 500, LEVEL::HIGH, PART::CHEST)
{
	m_status = { 20, 10, 20 };
}

Armor_GLOVE_LOW::Armor_GLOVE_LOW()
	:Armor("�ϱ� �尩",106, "���۶ո� �ϱ� �尩", 100, LEVEL::LOW, PART::GLOVES)
{
	m_status = { 5, 0, 5 };
}

Armor_GLOVE_MED::Armor_GLOVE_MED()
	:Armor("�߱� �尩",107, "������ �߱� �尩", 300, LEVEL::MED, PART::GLOVES)
{
	m_status = { 10, 2, 12 };
}

Armor_GLOVE_HIGH::Armor_GLOVE_HIGH()
	:Armor("��� �尩",108, "ưư�� ��� �尩", 500, LEVEL::HIGH, PART::GLOVES)
{
	m_status = { 15, 5, 20 };
}

Armor_SHOES_LOW::Armor_SHOES_LOW()
	:Armor("�ϱ� �Ź�",109, "��¦���� �ϱ� �Ź�", 100, LEVEL::LOW, PART::SHOES)
{
	m_status = { 5, 0, 10 };
}

Armor_SHOES_MED::Armor_SHOES_MED()
	:Armor("�߱� �Ź�",110, "��¦�ִ� �߱� �Ź�", 300, LEVEL::MED, PART::SHOES)
{
	m_status = { 10, 3, 18 };
}

Armor_SHOES_HIGH::Armor_SHOES_HIGH()
	:Armor("��� �Ź�",111, "��޽Ź�", 500, LEVEL::HIGH, PART::SHOES)
{
	m_status = { 15, 3, 28 };
}
