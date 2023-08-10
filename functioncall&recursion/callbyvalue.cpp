#include<iostream>

using namespace std;

void swap(int num1, int num2);

int main()
{
    int num1, num2;
    num1 = 10;
    num2 = 20;

    swap(num1,num2);
    cout << "main num1 = " << num1 << " num2 = " << num2;

    return 0;
}
void swap(int num1, int num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "function num1 = " << num1 << " num2 = " << num2 << endl;
}