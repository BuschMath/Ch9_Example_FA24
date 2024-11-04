#include <iostream>

using namespace std;

bool FunctionExample();

int main()
{
	if (FunctionExample())
	{
		cout << "Input worked!\n";
	}
	else
	{
		cout << "Error!\n";
	}

	return 0;
}

bool FunctionExample()
{
	cout << "Enter a number: ";
	int var;

	cin >> var;

	if (cin)
		return true;
	else
		return false;
}