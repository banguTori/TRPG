#pragma once
#include "Character.h"


typedef struct MonsterData
{
	const char* name;
	Status status;
} MonsterData;

class Monster :public Character
{
public:
	Monster(LEVEL _level = LEVEL::MAX);
	virtual ~Monster();

private:
	static MonsterData Data[(int)LEVEL::MAX];

public:
	void	Initialize() override;
	void	Update() override;
	void	Release() override;
	void	Render() override;

private:
	int		m_iLevel;
};
