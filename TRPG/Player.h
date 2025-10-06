#pragma once
#include "Character.h"
#include <array>


// ���漱�� 
class Weapon;
class Armor;

class Player : public Character
{
public:
	Player();
	virtual ~Player();

//���, �� ���� 
//�κ��丮�� �����ϸ� ��� ���� Item���� �޴°� �������� 
//�׷� ����ȯ�ؾ��ϴ� �ϴ� Weapon, Armor�� �޽��ϴ�
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

//���⼭ ��� ����,���� ���� 

};

