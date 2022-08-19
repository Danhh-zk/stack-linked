// stacklinkd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkedStackType.h"

using namespace std;

void testCopy(linkedStackType<int> OStack);

int main()
{
linkedStackType<int> stack;

int num;

stack.push(34);

stack.push(43); 
stack.push(27);

while (!stack.isEmptyStack())

{

	stack.pop(num);

	cout << num << endl;

}

cout << endl;

linkedStackType<int> otherStack;

linkedStackType<int> newStack;

newStack = stack;

cout << "After the assignment operator, newStack";

while(!newStack.isEmptyStack())

{

	newStack.pop(num);

	cout << num << endl;

}

otherStack =stack;

cout << "Testing the copy constructor" << endl;

testCopy(otherStack);

cout << "After the copy costructor, otherStack: " << endl;

while (!otherStack.isEmptyStack())
{
otherStack.pop(num);

cout << num << endl;

}

system("pause");

return 0;

}

void testCopy(linkedStackType<int> OStack)
{
	int num;

	cout << "Stack in the function testCopy:" << endl;

	while (!OStack.isEmptyStack())

	{

		OStack.pop(num);

		cout << num << endl;

	}


}
