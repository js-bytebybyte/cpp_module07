/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:47:47 by jsteenpu          #+#    #+#             */
/*   Updated: 2024/11/29 16:14:03 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

//template <typename T> //this is the template parameter declaration

/*
	~syntax 
	--> template = keyword for compiler
	--> next specify all the template parameters that will be used btw <> 
		--> function call: specify the template arguments btw = the actual type that will be used 
	--> for every type, use keyword 'typename' or 'class'
*/

/*
	To simplify the process of creating functions 
	that are able to work with different types
		1. replace specific types with type template parameters
		2. tell the compiler it's a function template
	T is a type template parameter = placeholder for any 

*/

template<typename T>
void	swap(T& x, T& y)
{
	T temp = x;

	x = y;
	y = temp;		
}

template<typename T>
const T&	min(const T& x, const T& y)
{
	return (x < y) ? x : y;
}

template<typename T>
const T&	max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

#endif