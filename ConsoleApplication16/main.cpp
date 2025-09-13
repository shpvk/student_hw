#include "includes.h"


int main()
{
    const int GROUP_SIZE = 3;
    Student* students = new Student[GROUP_SIZE];
    Subject* subject_list = new Subject[GROUP_SIZE];

    char* name = new char[100];
    char* subject = new char[100];
    
    int mark;
    for (int i = 0; i < GROUP_SIZE; ++i)
    {
        std::cout << "Enter name: ";
        std::cin >> name;
        students[i].SetName(name);

        std::cout << "Enter mark: ";
        std::cin >> mark;
        students[i].SetMark(mark);


        std::cout << "Enter subject: ";
        std::cin >> subject;
        subject_list[i].SetName(subject);

    }


    Group group1("KN241", students, GROUP_SIZE, subject_list, GROUP_SIZE);
    
    group1.Print();
      
    delete[] name;
    delete[] subject;
    delete[] students;
    delete[] subject_list;
}
