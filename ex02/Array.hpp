/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:07:36 by jsteenpu          #+#    #+#             */
/*   Updated: 2024/12/02 17:53:09 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

# define RESET	"\033[0m"
# define R		"\033[1;31m"			/* Red */
# define G		"\033[32m"				/* Green */
# define Y		"\033[33m"				/* Yellow */
# define B		"\033[34m"				/* Blue */
# define M		"\033[35m"				/* Magenta */
# define C		"\033[36m"				/* Cyan */

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T*  		 _array;
	public:
		Array() : _size(0), _array(new T()) {}
		Array(unsigned int n) : _size(n), _array(new T[_size]) {}
		Array(const Array<T>& src) : _size(src._size), _array(new T[src._size])
		{
			for (size_t i = 0; i < _size; i++)
				_array[i] = src._array[i];
		}
		Array&  operator=(const Array<T>& rhs)
		{
			if (this != &rhs)
			{			
				if (_size > 0)
					delete[] _array;
				else
					delete _array;
				_size = rhs._size;
				_array = new T[rhs._size];
				for (size_t i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}
		~Array()
		{
			if (_size > 0)
				delete[] _array;
			else
				delete _array;
		};

		// setter
		void	setArray(unsigned int index, T value)
		{
			if (index >= _size)
				throw indexOutofRangeException() ;
			this->_array[index] = value;
		}

		// getters 
		unsigned int	size() const
		{
			return _size;
		}
		
		T&	operator[](unsigned int index)
		{
			if (index >= _size)
				throw indexOutofRangeException(); 
			return _array[index];
		}

		// exception
		class	indexOutofRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "array index out of bounds";
				};
		};
};

#endif