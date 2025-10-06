#pragma once
#include "Object.h"

// 소비아이템 구현할거면 하위 consumable 클래스 추가하기 
class Character; 
class Item : public Object
{
public:
	Item(const char* _name,int _id, const char* _desc, int _price, LEVEL _level, TYPE _type);
	virtual ~Item();

protected:
	int						m_iId;
	const char*				m_szDescription;
	int						m_iPrice;
	TYPE					m_type = TYPE::MAX;
	LEVEL					m_level = LEVEL::MAX;

protected:
	Character*				m_pCharacter;
	int						m_iMaxStack = 10;
public:
	virtual void			Initialize();
	virtual void			Update();
	virtual void			Render();
	virtual void			Release();

public:
	LEVEL					GetLevel()	const { return m_level; }
	TYPE					GetType()	const { return m_type; }
	const char*				GetName()	const { return m_szName; }
	const char*				GetDesc()	const { return m_szDescription; }
	int						GetPrice()	const { return m_iPrice; }
public:
	void					SetCharacter(Character* _char);
};

