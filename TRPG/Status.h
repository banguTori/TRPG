#pragma once
class Status
{
public:
	//����Ʈ �����ڿ��� ����ȴ�. == Status() 
	Status(int _maxHp = 50, int _attack = 10, int _def = 10);
	~Status();
private:
	int		m_iMaxHp;	//�ִ�ü��
	int		m_iAttack;
	int		m_iDefence;
	int		m_iHp;		//���� ü��

	//Item Status
	int		m_iCritical;
	int		m_iDamageReduction;

public:
	int		GetMaxHp() { return m_iMaxHp; }
	void	SetMaxHp(int _hp) { m_iMaxHp = _hp; InitHp(); }

	int		GetHp() { return m_iHp; }
	void	SetHp(int _hp) { m_iHp = _hp; }
	void	InitHp() { m_iHp = m_iMaxHp; }

	int		GetAttack() { return m_iAttack; }
	void	SetAttack(int _atk) { m_iAttack = _atk; }

	int		GetDefence() { return m_iDefence; }
	void	SetDefence(int _def) { m_iDefence = _def; }

	int		GetCritical() { return m_iCritical; }
	void	SetCritical(int _value) { m_iCritical = _value; }

	int		GetDamageReduction() { return m_iDamageReduction; }
	void	SetDamageReduction(int _value) { m_iDamageReduction = _value; }
	
	//�ƹ� ������ 
	int		GetTotalAttack() { return m_iAttack + m_iAttack * (m_iCritical * 0.5) / 100; }
	int		GetTotalDamage(int _damage) {return _damage - (int)(m_iDefence * 0.2) - (int)(m_iDamageReduction * 0.3); }

	// Minus ��� �ϱ� �� �׷���..Subtract..
	void	SubtractStat(Status _status)
	{
		m_iMaxHp -= _status.GetMaxHp();
		m_iAttack -= _status.GetAttack();
		m_iDefence -= _status.GetDefence();
		m_iCritical -= _status.GetCritical();
		m_iDamageReduction -= _status.GetDamageReduction();
	}


	//�����ε� - AddStat
	void	AddStat(Status _status)
	{
		m_iMaxHp += _status.GetMaxHp();
		m_iAttack += _status.GetAttack();
		m_iDefence += _status.GetDefence();
		m_iCritical += _status.GetCritical();
		m_iDamageReduction += _status.GetDamageReduction();
	}


	//�Ӽ����� �����ų��
	void	AddStat(int _hp = 0, int _atk = 0, int _def = 0, int _cri = 0, int _dmRed = 0)
	{
		m_iMaxHp += _hp;
		m_iAttack += _atk;
		m_iDefence += _def;
		m_iCritical += _cri;
		m_iDamageReduction += _dmRed;
	}

};

