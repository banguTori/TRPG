#pragma once
#include "Object.h"
class Character : public Object
{
public:
	Character(const char* _name = nullptr);
	virtual ~Character();
public:
	virtual void	Initialize() = 0;
	virtual void	Update()	 = 0;
	virtual void	Render()	 = 0;
	virtual void	Release()	 = 0;

public:
	virtual int		Attack(Character* _char);
	virtual int		Damage(int _damage);
	bool			IsDead() { return m_status.GetHp() <= 0; }
};

