#include "Array.h"

Array::Array(size_t size)
{
	mySize = size;
	myData = new int[size];
}

Array::Array(Array &a)
{
	mySize = a.mySize;
	myData = new int[mySize];
	for (size_t i = 0; i < a.getsize(); i++)
		myData[i] = a.myData[i];
}

Array::~Array()
{
	delete[] myData;
}

void Array::set(size_t i, int val)
{
	if (i > mySize) return;
	myData[i] = val;
}

int Array::get(size_t i)
{
	if (i > mySize) return 0;
	return myData[i];
}

size_t Array::getsize()
{
	return mySize;
}