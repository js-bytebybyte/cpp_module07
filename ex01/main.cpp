/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:30:22 by jsteenpu          #+#    #+#             */
/*   Updated: 2024/12/02 18:10:44 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string.h>

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    
    std::cout << ">>> Int array elements: \n";
    iter(array, 5, &printElements);

    std::string strArray[] = {"Hello", "World", "!"};
    size_t arraySize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << ">>> String array elements: \n";
    iter(strArray, arraySize, printElements);
    return 0;
}