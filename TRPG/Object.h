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
	//���������Լ� -> �� Ŭ������ �߻�ȭ Ŭ������ ��ü ���� �Ұ���. 
	//�ڽĿ��� ���������Լ��� �ݵ�� �������ؾ���. ���������� ������ �ڽĵ� �߻�Ŭ����
	virtual void	Initialize() = 0;
	virtual void	Update()	 = 0;
	virtual void	Render()	 = 0;
	virtual void	Release()	 = 0;
public:
	Status& GetStatus() { return m_status; }
	const char* GetName() { return m_szName; }
};

