#pragma once
class Player;
class Field;

// 로비나 던전은 각자 구현 .. 던전만 일단 구현해도됨
class MainGame
{
	enum class MAP { LOBBY, DUNGEON, MAX };
public:
	MainGame();
	~MainGame();

private:
	Player* m_pPlayer;
	Field*	m_Map[(int)MAP::MAX];
	MAP		m_currentMap;
public:
	void	Initialize();
	void	Update();
	void	Render();
	void	Release();

};
