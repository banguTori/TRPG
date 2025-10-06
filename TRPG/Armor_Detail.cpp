#include "pch.h"
#include "Armor_Detail.h"


Armor_HELMET_LOW::Armor_HELMET_LOW()
	:Armor("하급 투구",100, "곧 부서질듯한 하급 투구", 100, LEVEL::LOW, PART::HELMET)
{
	m_status = { 8, 0, 6 };
}

Armor_HELMET_MED::Armor_HELMET_MED()
	:Armor("중급 투구",101, "대충은 막아줄 것같은 중급 투구", 250, LEVEL::MED, PART::HELMET)
{
	m_status = { 15, 3, 10 };
}

Armor_HELMET_HIGH::Armor_HELMET_HIGH()
	:Armor("상급 투구",102, "튼튼한 상급 투구", 500, LEVEL::HIGH, PART::HELMET)
{
	m_status = { 25, 8, 15 };
}

Armor_CHEST_LOW::Armor_CHEST_LOW()
	:Armor("하급 갑옷",103, "입어도 되나싶은 갑옷", 100, LEVEL::LOW, PART::CHEST)
{
	m_status = { 10,0,10 };
}

Armor_CHEST_MED::Armor_CHEST_MED()
	:Armor("중급 갑옷",104, "좀 튼튼한 중급 갑옷", 300, LEVEL::MED, PART::CHEST)
{
	m_status = { 15, 3, 15 };
}

Armor_CHEST_HIGH::Armor_CHEST_HIGH()
	:Armor("상급 갑옷",105, "강해보이는 상급 갑옷", 500, LEVEL::HIGH, PART::CHEST)
{
	m_status = { 20, 10, 20 };
}

Armor_GLOVE_LOW::Armor_GLOVE_LOW()
	:Armor("하급 장갑",106, "구멍뚫린 하급 장갑", 100, LEVEL::LOW, PART::GLOVES)
{
	m_status = { 5, 0, 5 };
}

Armor_GLOVE_MED::Armor_GLOVE_MED()
	:Armor("중급 장갑",107, "멀쩡한 중급 장갑", 300, LEVEL::MED, PART::GLOVES)
{
	m_status = { 10, 2, 12 };
}

Armor_GLOVE_HIGH::Armor_GLOVE_HIGH()
	:Armor("상급 장갑",108, "튼튼한 상급 장갑", 500, LEVEL::HIGH, PART::GLOVES)
{
	m_status = { 15, 5, 20 };
}

Armor_SHOES_LOW::Armor_SHOES_LOW()
	:Armor("하급 신발",109, "한짝뿐인 하급 신발", 100, LEVEL::LOW, PART::SHOES)
{
	m_status = { 5, 0, 10 };
}

Armor_SHOES_MED::Armor_SHOES_MED()
	:Armor("중급 신발",110, "두짝있는 중급 신발", 300, LEVEL::MED, PART::SHOES)
{
	m_status = { 10, 3, 18 };
}

Armor_SHOES_HIGH::Armor_SHOES_HIGH()
	:Armor("고급 신발",111, "고급신발", 500, LEVEL::HIGH, PART::SHOES)
{
	m_status = { 15, 3, 28 };
}
