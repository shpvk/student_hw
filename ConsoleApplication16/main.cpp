#include "includes.h"


int main()
{
    Subject subj1("Math");
    const int GROUP_SIZE = 10;
    Student* group = new Student[GROUP_SIZE];

    char* name = new char[100];
    int mark;
    for (int i = 0; i < GROUP_SIZE; ++i)
    {
        std::cout << "Enter name: ";
        std::cin >> name;
        group[i].SetName(name);

        std::cout << "Enter mark: ";
        std::cin >> mark;
        group[i].SetMark(mark);
    }




    //Student* students1 = new Student[GROUP_SIZE];
    //for (int i = 0; i < GROUP_SIZE, ++i)
    //{
    //    students1[i]
    //}



    
}




 


