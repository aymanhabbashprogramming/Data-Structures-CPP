#pragma once
#include"clsDblLinkedList.h"

template <class T>

class clsMyQueue {

private:
	clsDblLinkedList<T> _MyList;
public:

	void Print() {
		_MyList.PrintList();
	}

	void push(T value) {
		_MyList.InsertAtEnd(value);
	}

	void pop() {
		_MyList.DeleteFirstNode();
	}

	T front() {
		return _MyList.GetItem(0);
	}

	T back() {
		return _MyList.GetItem(_MyList.Size() - 1);
	}

	int size() {
		return _MyList.Size();
	}


};