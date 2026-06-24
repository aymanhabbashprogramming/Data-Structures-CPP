#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    // 1. Inserting Elements
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
    cout << "----------------------------------------------" << endl;

    // 2. Finding a Node
    cout << "\n[2] Searching for node with value (1).\n" << endl;

    clsDblLinkedList<int>::Node* FoundNode = MydblLinkedList.Find(1);
    if (FoundNode != NULL)
        cout << "\nNode with value 1 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";
    cout << "----------------------------------------------" << endl;
    // 3. Inserting at the End
    cout << "\n[3] Inserting (54) at the end of the list." << endl;

    MydblLinkedList.InsertAtEnd(54);
    MydblLinkedList.PrintList();
    cout << "----------------------------------------------" << endl;

    // 4. Inserting After a specific node
    cout << "\n[4] Inserting (80) after node (5)." << endl;

    clsDblLinkedList<int>::Node* Node5 = MydblLinkedList.Find(5);
    MydblLinkedList.InsertAfter(Node5, 80);
    MydblLinkedList.PrintList();
    cout << "----------------------------------------------" << endl;

    // 5. Deleting a specific Node
    cout << "\n[5] Deleting node with value (54)." << endl;
    clsDblLinkedList<int>::Node* Node54 = MydblLinkedList.Find(54);
    MydblLinkedList.DeleteNode(Node54);
    MydblLinkedList.PrintList();
    cout << "----------------------------------------------" << endl;

    // 6. Deleting First Node
    cout << "\n[6] Deleting the FIRST node." << endl;
    MydblLinkedList.DeleteFirstNode();
    MydblLinkedList.PrintList();
    cout << "----------------------------------------------" << endl;

    // 7. Deleting Last Node
    cout << "\n[7] Deleting the LAST node." << endl;
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();
    cout << "----------------------------------------------" << endl;

    return 0;
}