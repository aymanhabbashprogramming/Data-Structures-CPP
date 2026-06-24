#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

  
    cout << "[1] Inserting elements at the beginning.\n" << endl;

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

    MydblLinkedList.PrintList();

    MydblLinkedList.UpdateItem(4, 100);

    cout << "After updating item at index 4: " << endl;
    MydblLinkedList.PrintList();

    return 0;
}