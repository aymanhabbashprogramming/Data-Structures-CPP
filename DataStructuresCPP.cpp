#include <iostream>
#include "clsDblLinkedList.h"
#include"clsMyQueue.h"
#include"clsMyStack.h"

using namespace std;

int main()
{
	clsMyStack<int> MyStack;
	MyStack.Push(10);
	MyStack.Push(20);
	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);

	MyStack.Print();
	cout << "Stack size: " << MyStack.size() << endl;
	cout << "\nStack Top: " << MyStack.Top() << endl;
	cout << "\nStack Bottom: " << MyStack.Bottom() << endl;

	MyStack.pop();
	cout << "\nStack after Pop: ";
	MyStack.Print();

	MyStack.Reverse();
	cout << "\nStack after Reverse: ";
	MyStack.Print();

	MyStack.UpdateItem(2, 25);
	cout << "\nStack after UpdateItem(2, 25): ";
	MyStack.Print();

	MyStack.InsertAfter(2, 15);
	cout << "\nStack after InsertAfter(2, 15): ";
	MyStack.Print();

	MyStack.InsertAtFront(5);
	cout << "\nStack after InsertAtFront(5): ";
	MyStack.Print();

	MyStack.InsertAtBack(55);
	cout << "\nStack after InsertAtBack(55): ";
	MyStack.Print();

	MyStack.pop();
	cout << "\nStack after Pop: ";
	MyStack.Print();

	MyStack.Clear();
	cout << "\nStack after Clear: ";
	MyStack.Print();

	cout << endl;
	return 0;
}