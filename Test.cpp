#include "Array.h"
#include <stdio.h>

int main() {
	Array a(2);
	a.set(0, 42);
	a.set(1, 69);
	
	Array b(a);

	b.set(0, 88);
	b.set(1, 99);

	Array c(1);
	c = a;

	for (size_t i = 0; i < a.getsize(); i++)
		printf("%d\n", a.get(i));

	return 0;
}