#include "pch.h"
#include "MainGame.h"
#include "Field.h"
#include "Player.h"
#include "Define.h"

MainGame::MainGame()
{
	m_pPlayer = new Player;
	//m_Map[(int)MAP::DUNGEON] = new Dungeon(m_pPlayer);
}

MainGame::~MainGame()
{
	Release();
}
void MainGame::Initialize()
{
	m_pPlayer->Initialize();
	m_currentMap = MAP::DUNGEON;
	//m_Map[(int)MAP::DUNGEON]->Initialize();

}

void MainGame::Update()
{
	while (true)
	{
		RETURN_STATE return_state; // = m_Map[(int)m_currentMap]->Update();
		switch (return_state)
		{
		case RETURN_STATE::RETRY:
			continue;
			break;
		case RETURN_STATE::NEXT:
			if (m_currentMap == MAP::DUNGEON) m_currentMap = MAP::LOBBY;
			else m_currentMap = MAP::DUNGEON;
			m_Map[(int)m_currentMap]->Initialize();
			break;
		case RETURN_STATE::EXIT:
			return;
		default:
			break;
		}

	}
}

void MainGame::Render()
{

}

void MainGame::Release()
{
	SAFE_DELETE(m_pPlayer);
	for (int i = (int)MAP::LOBBY; i < (int)MAP::MAX; i++)
	{
		SAFE_DELETE(m_Map[i]);
	}
}