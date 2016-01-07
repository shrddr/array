#include <stdlib.h>

class Array
{
private:
	int* myData;
	size_t mySize;
public:
	Array(size_t size);
	Array(Array &a);
	~Array();
	void operator=(Array &a);
	void set(size_t i, int val);
	int get(size_t i);
	size_t getsize();
	 
};

