#ifndef ITER_TPP
# define ITER_TPP

# include <iostream>

template < typename A>
void	print_array_element (A a) {
	std::cout << a << std::endl;
}

template <typename A>
void iter(A *array, int max, void f(A)){
	for (int i = 0; i < max; i++)
		f(array[i]);
}

#endif