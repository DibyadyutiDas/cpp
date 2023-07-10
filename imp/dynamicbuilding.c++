// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function
#include <iostream>
using namespace std;

class GFG {
public:
	void call_Function() // function that call print
	{
		print();
	}
	void print() // the display function
	{
		cout << "Printing the Base class Content" << endl;
	}
};
class GFG2 : public GFG // GFG2 inherit a publicly
{
private:
	void print() // GFG2's display
	{
		cout << "Printing the Derived class Content"
			<< endl;
	}
};
int main()
{
	GFG geeksforgeeks; // Creating GFG's object
	geeksforgeeks.call_Function(); // Calling call_Function
	GFG2 geeksforgeeks2; // creating GFG2 object
	geeksforgeeks2.call_Function(); // calling call_Function
	return 0;
}
