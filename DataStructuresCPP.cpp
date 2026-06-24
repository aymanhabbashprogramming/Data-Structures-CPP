#include <iostream>
#include "clsDblLinkedList.h"
#include"clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue<int> MyQueue;

	MyQueue.push(15);
	MyQueue.push(25);
	MyQueue.push(35);
	MyQueue.push(45);
	MyQueue.push(55);
	MyQueue.push(65);

	cout << "[1] Queue elements:  ";
	MyQueue.Print();

	cout << "\n[2] Queue size    :  " << MyQueue.size() << endl;
	cout << "\n[3] Queue front   :  " << MyQueue.front() << endl;
	cout << "\n[4] Queue back    :  " << MyQueue.back() << endl;
	cout << "\n[5] Poping 2 elements from the queue: ";
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.Print();
	cout << "\n[6] Get Item at index 3:  " << MyQueue.GetItem(3) << endl;
	cout << "\n[7] Reversing the queue: ";
	MyQueue.Reverse();
	MyQueue.Print();
	cout << "\n[8] Updating Item at index 2 to 100: ";
	MyQueue.UpdateItem(2, 100);
	MyQueue.Print();
	cout << "\n[9] Inserting 200 after index 2: ";
	MyQueue.InsertAfter(2, 200);
	MyQueue.Print();
	cout << "\n[10] Inserting 5 at the front of the queue: ";
	MyQueue.InsertAtFront(5);
	MyQueue.Print();
	cout << "\n[11] Inserting 500 at the back of the queue: ";
	MyQueue.InsertAtBack(500);
	MyQueue.Print();
	MyQueue.Clear();
	cout << "\n[12] After clearing the queue: ";
	MyQueue.Print();

	cout << endl;
	return 0;
}