#include "Array.h"
#include <stdio.h>

int main() {
	Array a(2);
	a.set(0, 42);
	a.set(1, 69);
	
	for (size_t i = 0; i < a.getsize(); i++)
		printf("%d\n", a.get(i));

	return 0;
}