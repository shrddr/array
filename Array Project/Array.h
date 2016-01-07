class Array
{
private:
	int* MyData;
	size_t MySize;
public:
	Array(size_t size);
	~Array();
	void set(size_t i, int val);
	int get(size_t i);
	size_t getsize();
};

