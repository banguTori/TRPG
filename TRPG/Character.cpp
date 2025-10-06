#include "pch.h"
#include "Character.h"

Character::Character(const char* _name)
	:Object(_name)
{
}

Character::~Character()
{
}

//나중에 출력을 위해서 반환값 설정해놓은것. 딱히 의미없음 
int Character::Attack(Character* _char)
{
	//구현하기
}	

int Character::Damage(int _damage)
{
	//구현하기
}
