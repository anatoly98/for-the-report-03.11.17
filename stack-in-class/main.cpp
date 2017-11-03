#include <conio.h>
#include <iostream>
#include "stack_class.h"

using namespace std;

int main()
{
	system("color 3e");
	Stack stack;
	int n;
	cout << "number of element in stack = "; cin >> n;
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;
		stack.push(value);
	}

	cout << endl;
	for (int i = 0; i<n; i++)
		cout << stack.pop() << endl;
	_getch();


	return 0;
}

