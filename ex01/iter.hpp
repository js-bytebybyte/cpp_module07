/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:26:52 by jsteenpu          #+#    #+#             */
/*   Updated: 2024/12/03 13:25:53 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T>
void    printElements(const T& element)
{
    std::cout << element << std::endl;
}

template<typename T>
void    iter(T* array, int len, void (*func)(const T&))
{
    if (!array)
        return ;
    for (int i = 0; i < len; i++)
        func(array[i]);
    return ;
}

#endif
