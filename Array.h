#include <stdlib.h>
#include <list>

class Array
{
private:
	int* myData;
	size_t mySize;
public:
	Array(size_t size);
	Array(const Array &a);
	~Array();
	Array& operator=(Array &a);
	void set(size_t i, int val);
	int get(size_t i) const;
	size_t getsize() const;
};

