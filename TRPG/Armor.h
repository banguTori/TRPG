#pragma once
#include "Equipment.h"
class Armor : public Equipment
{
public:
	Armor(const char* _name, int _id, const char* _desc, int _price, LEVEL _level, PART _part);
	virtual ~Armor();

protected:
	PART m_part;

public:
	virtual void	Initialize();
	virtual void	Update();
	virtual void	Release();
	virtual void	Render();

public:
	PART			GetPart() const { return m_part; }
};

