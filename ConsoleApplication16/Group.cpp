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
    delete[] name;
    list = nullptr;
    subject_list = nullptr;
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

void Group::Print()
{
    std::cout << "Group name: " << name << "\n";

    std::cout << "Students:\n";
    for (int i = 0; i < count_of_students; ++i)
    {
        std::cout << "Name: " << list[i].GetName() << " Mark: " << list[i].GetMark() << std::endl;
    }

    std::cout << "Subjects:\n";
    for (int i = 0; i < count_of_subjects; ++i)
    {
        std::cout << "Name: " << subject_list[i].GetName() << "\n";
    }
}
