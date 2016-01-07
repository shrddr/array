#include "Array.h"

Array::Array(size_t size)
{
	MySize = size;
	MyData = new int[size];
}

Array::~Array()
{
	delete[] MyData;
}

void Array::set(size_t i, int val)
{
	if (i > MySize) return;
	MyData[i] = val;
}

int Array::get(size_t i)
{
	if (i > MySize) return 0;
	return MyData[i];
}

size_t Array::getsize()
{
	return MySize;
}