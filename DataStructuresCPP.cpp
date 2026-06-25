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

	cout << "size: " << arr.size() << endl;

	int index = arr.Find(20);
	if (index == -1)
	{
		cout << "Item not found" << endl;
	}
	else
	{
		cout << "Item found at index: " << index << endl;
	}

	arr.DeleteItem(30);
	cout << "After deleting 30: ";
	arr.PrintList();
	cout << "\nsize: " << arr.size() << endl;

	cout << endl;
	return 0;
}