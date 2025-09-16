#include "includes.h"

Subject::Subject()
{
    name = nullptr;
}

Subject::~Subject()
{
    delete[] name;
}

void Subject::SetName(const char* name)
{
    if (this->name != nullptr)
    {
        delete[] this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

char* Subject::GetName()
{
    return name;
}

Subject::Subject(const Subject& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);
    
    std::cout << "Copy constructor\n";

}
