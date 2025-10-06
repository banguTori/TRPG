#pragma once
#include "Item.h"

//나중에 업그레이드 구현할때 여기서 구현하려고 Equipment따로 만듦
class Equipment : public Item
{
public:
	Equipment(const char* _name, int _id, const char* _desc, int _price, LEVEL _level, TYPE _type);
	virtual ~Equipment();

public:
	virtual void	Equip();
	virtual void	UnEquip();
};

