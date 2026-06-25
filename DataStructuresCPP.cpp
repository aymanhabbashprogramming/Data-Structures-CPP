#include <iostream>
#include "clsDblLinkedList.h"
#include"clsMyQueue.h"
#include"clsMyStack.h"
#include"clsDynamicArray.h"

using namespace std;

int main()
{
	clsDynamicArray<int> arr(5);
	arr.SetItem(0, 10);
	arr.SetItem(1, 20);
	arr.SetItem(2, 30);
	arr.SetItem(3, 40);
	arr.SetItem(4, 50);
	arr.PrintList();

	cout << "\nsize: " << arr.size() << endl;

	arr.InsertAt(2, 35);
	cout << "After InsertAt(2, 35): ";

	arr.PrintList();
	cout << "\nsize: " << arr.size() << endl;

	cout << endl;
	return 0;
}