#include<iostream>
using namespace std;
void print(string name, int age);
//void print2(const string name, const int age);
int main()
{
    string name = "bro";
    int age = 18;
    print(name, age);
    //print2(name, age);                     we can not change the value of constant parameter
    return 0;
}
void print(string name, int age)
{
    name = "dibya";
    age = 20;
    cout << name << endl;
    cout << age << endl;
}
/*void print2(const string name, const int age)
{
    name = "dibya";
    age =20;
    cout << name << endl;
    cout << age << endl;
}*/