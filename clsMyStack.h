#pragma once
#include "clsDblLinkedList.h"

template <typename T>
class clsMyStack : public clsMyQueue<T>
{
private:

public:

	void Push(T Value)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginning(Value);
	}

	T Top()
	{
		return clsMyQueue<T>::front();
	}

	T Bottom()
	{
		return clsMyQueue<T>::back();
	}

};

