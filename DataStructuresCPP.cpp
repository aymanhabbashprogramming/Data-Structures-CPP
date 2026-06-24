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
	cout << endl;
	return 0;
}