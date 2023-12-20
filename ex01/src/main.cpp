#include "iter.tpp"

int main (void) {
	int a_int[5] = {1, 2, 3, 4, 5};
	std::string a_string[2] = {"salut!", "bonjour!"};
	iter<int>(a_int, 5, print_array_element<int>);
	iter<std::string>(a_string, 2, print_array_element<std::string>);
	return (0);
}