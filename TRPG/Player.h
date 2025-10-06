#pragma once
#include "Character.h"
#include <array>


// 전방선언 
class Weapon;
class Armor;

class Player : public Character
{
public:
	Player();
	virtual ~Player();

//장비, 방어구 슬롯 
//인벤토리를 생각하면 장비를 상위 Item으로 받는게 낫겠지만 
//그럼 형변환해야하니 일단 Weapon, Armor로 받습니다
private:
	Weapon* m_pWeapon;
	array<Armor*, (size_t)PART::MAX> m_ArmorParts;

public:
	virtual void	Initialize();
	virtual void	Update();
	virtual void	Render();
	virtual void	Release();

public:
	const char* GetRoleName();

//여기서 장비 장착,해제 관리 

};

