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

    clsDblLinkedList <int>::Node* indexNode = MydblLinkedList.GetNode(2);

    if (indexNode == nullptr)
    {
        cout << "the node at index 2 is not found" << endl;
    }
    else
    {
        cout << "the node at index 2 is: " << indexNode->value << endl;
    }

    return 0;
}