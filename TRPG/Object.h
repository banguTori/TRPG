#pragma once
#include "Status.h"
#include "Define.h"
class Object
{
public:
	Object(const char* _name);
	virtual ~Object();

protected:
	char m_szName[20];
	Status m_status;

public:
	//순수가상함수 -> 이 클래스는 추상화 클래스로 객체 생성 불가능. 
	//자식에서 순수가상함수를 반드시 재정의해야함. 재정의하지 않으면 자식도 추상클래스
	virtual void	Initialize() = 0;
	virtual void	Update()	 = 0;
	virtual void	Render()	 = 0;
	virtual void	Release()	 = 0;
public:
	Status& GetStatus() { return m_status; }
	const char* GetName() { return m_szName; }
};

