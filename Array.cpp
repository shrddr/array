#include "Array.h"

Array::Array(size_t size)
{
	mySize = size;
	myData = new int[mySize];
}

Array::Array(Array &a) // pass by reference required
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

void Array::operator=(Array &a) // pass by reference to save on memory
{
	delete[] myData;
	mySize = a.mySize;
	myData = new int[mySize];
	for (size_t i = 0; i < a.getsize(); i++)
		myData[i] = a.myData[i];
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