#pragma once
#include <iostream>
using namespace std;

template<typename T>
class clsDynamicArray
{

private:
	int _Size = 0;

public:
	T* OriginalArray;

	clsDynamicArray(int size)
	{
		if (size < 0)
		{
			size = 0;
		}

		_Size = size;
		OriginalArray = new T[_Size];
	}

	~clsDynamicArray() {
		delete[] OriginalArray;
	}

	bool SetItem(int index, T value) {

		if (index >= _Size || _Size < 0)
		{
			return false;
		}

		OriginalArray[index] = value;
		return true;
	}

	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	int size() {
		return _Size;
	}

	void Print() {

		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}

	}



};