//* global variable declare outside the function
//* local variable declare inside the function#include<iostream>

#include<iostream>

int num = 1;

using namespace std;
void  print();

int main()
{
    int num = 2;
    cout << num << endl;
    print();
    return 0;
}

void print()
{
    int num = 3;
    cout << num << endl;

}

// void  print(int num);
// print(num);                  //* if we declare this type an error will occurred 
// void print(int num)