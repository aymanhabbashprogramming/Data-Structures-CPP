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

	cout << "\nis empty: " << arr.IsEmpty() << endl;

	cout << "size: " << arr.size() << endl;

	cout << "\nGet item at index 2: " << arr.GetItem(2) << endl;

	arr.Reverse();
	cout << "\nReversed array: ";
	arr.PrintList();

	arr.clear();
	cout << "\nCleared array: ";
	arr.PrintList();


	cout << endl;
	return 0;
}