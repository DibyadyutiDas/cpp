#include<iostream>
using namespace std;

class car{
    public:

    string name;
    string model;
    string color;
    int year;

    void accelerate()
    {
        cout << "You step on the gas\n";
    }
    void brake()
    {
        cout << "You step on the brake\n";
    }
};

int main()
{
    car car1;

    car1.name = "Ford";
    car1.model = "Mustang";
    car1.color = "black";
    car1.year = 2024;

    cout << car1.name << '\n';
    cout << car1.model << '\n';
    cout << car1.color << '\n';
    cout << car1.year << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}