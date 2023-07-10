#include<iostream>
using namespace std;
int main()
{
    int x = 100;
    char y = 100;                            // implicit  = automatic
    //int z = (double)14.36;
    double z =(int)14.36;                // explicit = procede the valuue with new data type
    cout << x << endl << y << endl << z;
    return 0;
}