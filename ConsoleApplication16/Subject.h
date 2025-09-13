#pragma once
#include "includes.h"
class Subject
{
private:
	char* name;
public:
	Subject();
	~Subject();

	void SetName(const char* name);
	char* GetName();
};

