#include "includes.h"

Subject::Subject()
{
    name = nullptr;
}

Subject::Subject(const char* name)
{
    if (this->name != nullptr)
    {
        delete this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

Subject::~Subject()
{
    delete name;
}

void Subject::SetName(const char* name)
{
    if (this->name != nullptr)
    {
        delete this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}
