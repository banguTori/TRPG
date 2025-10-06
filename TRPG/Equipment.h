#pragma once
#include "Item.h"

//���߿� ���׷��̵� �����Ҷ� ���⼭ �����Ϸ��� Equipment���� ����
class Equipment : public Item
{
public:
	Equipment(const char* _name, int _id, const char* _desc, int _price, LEVEL _level, TYPE _type);
	virtual ~Equipment();

public:
	virtual void	Equip();
	virtual void	UnEquip();
};

