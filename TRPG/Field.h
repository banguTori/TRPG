#pragma once
#include "Define.h"


//�� Ŭ������ ��ӹ޾�  �κ�,������ ����. ������ �ϴ� ���⼭ �׽�Ʈ�� 
class Player;
class Monster;
class Field
{
public:
	Field(Player* _player = nullptr);
	virtual ~Field();

protected:
	Player* m_pPlayer;
	Monster* m_pMonster; 

public:
	virtual void			Initialize();
	virtual RETURN_STATE	Update();
	virtual void			Render();
	virtual void			Release();

public:
	virtual void			SetPlayer(Player* _player);

};

	