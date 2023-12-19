#include "iter.tpp"

int main (void) {
	int array[5] = {1, 2, 3, 4, 5};
	iter(array, 5, print_array_element);
	return (0);
}