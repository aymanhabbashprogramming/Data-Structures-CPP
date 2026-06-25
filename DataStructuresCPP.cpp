#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> arr(7);

    arr.SetItem(0, 10);
    arr.SetItem(1, 20);
    arr.SetItem(2, 30);
    arr.SetItem(3, 40);
    arr.SetItem(4, 50);
    arr.SetItem(5, 60);
    arr.SetItem(6, 70);

    cout << "Initial Array:\n";
    arr.PrintList();

    cout << "\n\nIs Empty: " << arr.IsEmpty() << endl;
    cout << "Size: " << arr.size() << endl;

    arr.InsertAtBeginning(35);

    cout << "\n\nAfter InsertAtBeginning(35):\n";
    cout << "Size: " << arr.size() << endl;
    arr.PrintList();

    arr.InsertBefore(0, 25);

    cout << "\n\nAfter InsertBefore(0, 25):\n";
    cout << "Size: " << arr.size() << endl;
    arr.PrintList();

    arr.InsertAfter(5, 45);

    cout << "\n\nAfter InsertAfter(5, 45):\n";
    cout << "Size: " << arr.size() << endl;
    arr.PrintList();

    arr.InsertAtEnd(75);

    cout << "\n\nAfter InsertAtEnd(75):\n";
    cout << "Size: " << arr.size() << endl;
    arr.PrintList();

    cout << endl;

    return 0;
}