#pragma once
#include "includes.h"
class Student
{
private:

    char* name;
    int mark;
    //int size;
public:
    Student();
    ~Student();
    void SetName(char* name);
    char* GetName();
    void Init(char* name, int mark);
    

    void SetMark(int mark);
    int GetMark();

    Student(const Student& obj);
};

