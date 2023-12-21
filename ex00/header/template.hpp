#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template< typename T >
T const &max(T const & x, T const & y) {
	return (x > y ? x : y);
}

template< typename T >
T const &min(T const & x, T const & y) {
	return (x < y ? x : y);
}

template< typename T1, typename T2 >
void	swap(T1 & t1, T2 & t2){
	T1 t3 = t1;
	t1 = t2;
	t2 = t3;
}

#endif