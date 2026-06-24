#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

 
    MydblLinkedList.InsertAtBeginning(12);
    MydblLinkedList.InsertAtBeginning(11);
    MydblLinkedList.InsertAtBeginning(10);
    MydblLinkedList.InsertAtBeginning(9);
    MydblLinkedList.InsertAtBeginning(8);
    MydblLinkedList.InsertAtBeginning(7);
    MydblLinkedList.InsertAtBeginning(6);
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "Elements:\n";

    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(8, 33);
    cout << "\nAfter Insert 33 After Index 8\n";

    MydblLinkedList.PrintList();

    return 0;
}