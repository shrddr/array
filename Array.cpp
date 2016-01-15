#include "Array.h"

Array::Array(size_t size): mySize(size)	// initializer
{
	myData = new int[mySize];
}

Array::Array(const Array &a)
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

Array& Array::operator=(Array &a)
{
	if (this != &a)						// avoid a=a calls
	{
		delete[] myData;
		mySize = a.mySize;
		myData = new int[mySize];
		for (size_t i = 0; i < a.getsize(); i++)
			myData[i] = a.myData[i];
	}
	return *this;						// allow a=b=c calls
}

void Array::set(size_t i, int val)
{
	if (i > mySize) return;
	myData[i] = val;
}

int Array::get(size_t i) const			// doesn't change the fields
{
	if (i > mySize) return 0;
	return myData[i];
}

size_t Array::getsize() const
{
	return mySize;
}