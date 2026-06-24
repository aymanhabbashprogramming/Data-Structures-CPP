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

	T GetItem(int index) {
		return _MyList.GetItem(index);
	}

	void Reverse() {
		_MyList.Reverse();
	}

	bool UpdateItem(int index, T newValue) {
		return _MyList.UpdateItem(index, newValue);
	}

	bool InsertAfter(int index, T value) {

		return _MyList.InsertAfter(index, value);
	}

	void InsertAtFront(T value) {
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {
		_MyList.InsertAtEnd(value);
	}

	void Clear() {
		_MyList.Clear();
	}

};