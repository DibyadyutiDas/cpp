//* constructor

#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int class_;
    double sgpa;

    student(string name,int class_,double sgpa)
    {
        this->name = name;
        this->class_ = class_;
        this->sgpa = sgpa;
    }
};

int main()
{
    student student1("Dibya",20,8.2);
    student student2("Ram",22,9.2);

    cout << student1.name << '\n';
    cout << student1.class_ << '\n';
    cout << student1.sgpa << '\n';

    cout << student2.name << '\n';
    cout << student2.class_ << '\n';
    cout << student2.sgpa << '\n';

    return 0;
}