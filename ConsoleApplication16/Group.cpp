#include "includes.h"

Group::Group()
{
    name = nullptr;
    list = nullptr;
    count_of_students = 0;
    subject_list = nullptr;
    count_of_subjects = 0;
}

Group::~Group()
{
    delete name;
    delete list;
    delete subject_list;
}

Group::Group(const char* name, Student* list, int count_of_students, Subject* subject_list, int count_of_subjects)
{
    if (this->name != nullptr)
    {
        delete this->name;
    }

    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);


    this->list = list;
    this->count_of_students = count_of_students;
    this->subject_list = subject_list;
    this->count_of_subjects = count_of_subjects;
}

void Group::Print(const int GROUP_SIZE)
{
    std::cout << "Name: " << name << std::endl;

    for (int i = 0; i < GROUP_SIZE; ++i)
    {
        std::cout << "Student: " << list[i]
    }
    //std::cout << "List: " << list << std::endl;
    std::cout << "Count of students: " << count_of_students << std::endl;
    std::cout << "Subject list: " << subject_list << std::endl;
    std::cout << "Count of subjects: " << count_of_subjects << std::endl;
}

