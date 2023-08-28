#include<iostream>
using namespace std;

class human{
    public:

    string name;        // string name = "Bro";
    string occupation;  // string occupation = "Student"; default
    int age;

    void eat()
    {
        cout << "This person is eating\n";
    }
    void drink()
    {
        cout << "This person is drinking\n";
    }
    void sleep()
    {
        cout << "This person is sleeping\n";
    }
};

int main()
{

    human dibya;
    human ram;

    dibya.name = "dibyadyuti Das";
    dibya.occupation = "Student";
    dibya.age = 20;

    ram.name = "Ram";
    ram.occupation = "Student";
    ram.age = 21;

    cout << dibya.name << '\n';
    cout << dibya.occupation << '\n';
    cout << dibya.age << '\n';

    cout << ram.name << '\n';
    cout << ram.occupation << '\n';
    cout << ram.age << '\n';

    dibya.eat();
    dibya.drink();
    dibya.sleep();

    return 0;
}