#pragma once
#include "Equipment.h"
class Weapon :
    public Equipment
{
public:
	Weapon(const char* _name,int _id, const char* _desc, int _price, LEVEL _level, ROLE _role);
	virtual ~Weapon();

protected:
	ROLE			m_eRole;
public:
	virtual void	Initialize();
	virtual void	Update();
	virtual void	Release();
	virtual void	Render();
public:
	ROLE			GetRole() { return m_eRole; }
	const char*		GetRoleName();
};

