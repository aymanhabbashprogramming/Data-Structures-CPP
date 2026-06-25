#pragma once
#include <iostream>
using namespace std;

template<typename T>
class clsDynamicArray
{

protected:
	int _Size = 0;
	T* _TempArray;

public:
	T* OriginalArray;

	clsDynamicArray(int size = 0)
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

	void PrintList() {

		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}

	}

	void Resize(int NewSize = 0) {

		if (NewSize < 0)
		{
			NewSize = 0;
		}

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
		{
			_Size = NewSize;
		}


		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;
		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}

	T GetItem(int index) {

		if (index < 0 || index >= _Size)
		{
			return T();
		}
		return OriginalArray[index];
	}

	void  Reverse()
	{

		_TempArray = new T[_Size];

		int counter = 0;

		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[counter] = OriginalArray[i];
			counter++;
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}

	void clear() {
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index)
	{

		if (index >= _Size || index < 0)
		{
			return false;
		}

		_Size--;

		if (_Size == 0)
		{
			delete[] OriginalArray;
			OriginalArray = nullptr;
			return true;
		}

		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		for (int i = index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}

	bool DeleteLastItem()
	{
		return DeleteItemAt(_Size - 1);
	}

};