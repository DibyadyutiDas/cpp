#include<iostream>

using namespace std;

string concatString(string firstname,string midname);

int main()
{
    string firstname = "Dibya";
    string midname = "dyuti";
    string fullname = concatString(firstname,midname);   // here concat is a user define function

    cout << "Hello" << fullname;

    return 0;
}

string concatString(string firstname,string midname)   // the function type must be string for string return 
{
    return firstname + "" + midname;
}