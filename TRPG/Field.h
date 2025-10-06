#pragma once
#include "Define.h"


//이 클래스를 상속받아  로비,던전을 구현. 지금은 일단 여기서 테스트함 
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

	