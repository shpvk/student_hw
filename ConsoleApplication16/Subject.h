#pragma once
#include "includes.h"
class Subject
{
private:
	char* name;
public:
	Subject();
	Subject(const char* name);
	~Subject();
	void SetName(const char* name);
};

