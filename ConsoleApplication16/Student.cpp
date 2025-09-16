#include "includes.h"

Student::Student()
{
    name = nullptr;
    mark = 0;
    //size = 0;
}

Student::~Student()
{
    delete name;
}

void Student::SetName(char* name)
{
    if (this->name != nullptr)
    {
        delete this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

char* Student::GetName()
{
    return name;
}

void Student::Init(char* name, int mark)
{
    if (this->name != nullptr)
    {
        delete this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);

    this->mark = mark;
    //this->size = size;
}

void Student::SetMark(int mark)
{
    this->mark = mark;
}

int Student::GetMark()
{
    return mark;
}

Student::Student(const Student& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);

    mark = obj.mark;

    std::cout << "Copy constructor\n";
}
