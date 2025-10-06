#pragma once
class Player;
class Field;

// �κ� ������ ���� ���� .. ������ �ϴ� �����ص���
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
