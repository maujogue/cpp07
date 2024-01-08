#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> 
class Array {
	private:
		unsigned int _size;
		T *_tab;

	public:
		Array() : _size(0), _tab(NULL) {};

		Array(unsigned int size) : _size(size), _tab(new T[size]) {}

		Array(Array const & src) : _size(src._size), _tab(new T[src._size]) {
			for (unsigned int i = 0; i < src.size(); i++)
                _tab[i] = src._tab[i];
		};

		Array& operator=(Array const & src) {
			this->_size = src._size;
			delete this->_tab;
			this->_tab = new T[this->_size];
			if (this != &src){
				for (unsigned int i = 0; i < this->_size; i++)
					this->_tab[i] = src._tab[i];
			}
			return (*this);
		};

		~Array() { delete [] _tab;}

		unsigned int size() const {
			return this->_size;
		}

		class outOfBoundException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Provided index is out of bound.";}
		};

		const T operator[](unsigned int i) const {
			if (i < 0 || i >= this->_size)
				throw outOfBoundException();
			return (this->_tab[i]);
		}

		T& operator[](int i) const {
			if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
				throw outOfBoundException();
			return (this->_tab[i]);
		}
};

#endif