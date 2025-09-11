#pragma once
#include "includes.h"
class Group
{
    char* name;
    Student* list;
    int count_of_students;
    Subject* subject_list;
    int count_of_subjects;
public:
    Group();
    ~Group();
    Group(const char* name, Student* list, int count_of_students, Subject* subject_list, int count_of_subjects);
};

