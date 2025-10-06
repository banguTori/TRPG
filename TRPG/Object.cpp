#include "pch.h"
#include "Object.h"

Object::Object(const char* _name)
{
	if (_name) strcpy_s(m_szName, sizeof(m_szName), _name);
}

Object::~Object()
{
}
