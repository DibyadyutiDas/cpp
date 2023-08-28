#include<iostream>
using namespace std;

void print(string name, int age);

class student
{
    public:
    string name;
    int age;
};

int main()
{
    student dibya;
    dibya.name = "Dibyadyuti Das";
    dibya.age = 18;
    
    student dibya2;
    dibya2.name = "Dibyadyuti";
    dibya2.age = 20;
    
    print(dibya.name, dibya.age);
    print(dibya2.name, dibya2.age);
    return 0;
}

void print(string name, int age)
{
    cout << name << '\n';
    cout << age << '\n';
}