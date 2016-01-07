#include "Array.h"

Array::Array(size_t size)
{
	mySize = size;
	myData = new int[size];
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