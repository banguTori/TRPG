#include "pch.h"
#include "Player.h"
#include "WeaponDetail.h"

Player::Player()
{
}

Player::~Player()
{
	Release();
}

void Player::Initialize()
{

}

void Player::Update()
{

}
void Player::Render()
{

}
void Player::Release()
{

}

//���⿡ ���� ������ ��ȯ 
const char* Player::GetRoleName()
{
	if (!m_pWeapon) return nullptr;
	return m_pWeapon->GetRoleName();
}