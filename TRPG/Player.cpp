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

//무기에 따른 직업명 반환 
const char* Player::GetRoleName()
{
	if (!m_pWeapon) return nullptr;
	return m_pWeapon->GetRoleName();
}