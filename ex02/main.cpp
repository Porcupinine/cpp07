/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/22 12:40:08 by laura         #+#    #+#                 */
/*   Updated: 2024/07/22 12:40:08 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.h"

int main () {
	try {
		Array<int> arr1;
		Array<int> arr2(5);

		std::cout << "Size of arr1: " << arr1.size() <<"\n";
		std::cout << "Size of arr2: " << arr2.size() << "\n";

		for (int x = 0; x< arr2.size(); x++) {
			arr2[x] = 9;
		}
		for (int x = 0; x< arr2.size(); x++) {
			std::cout <<arr2[x]<<", ";
		}
		std::cout<<"\n";

		// Testing copy constructor
		Array<int> arr3 = arr2;
		std::cout << "arr3[0]: " << arr3[0] << std::endl;
		arr3[0] = 30;
		std::cout << "arr3[0] after: " << arr3[0] << std::endl;
		std::cout << "arr2[0] should still be 10: " << arr2[0] << std::endl;

		// Testing assignment operator
		Array<int> arr4;
		arr4 = arr2;
		std::cout << "arr4[1]: " << arr4[1] << std::endl;
		arr4[1] = 40;
		std::cout << "arr4[1] after: " << arr4[1] << std::endl;
		std::cout << "arr2[1] should still be 20: " << arr2[1] << std::endl;

		// Test out of bounds
		std::cout << "Testing out of bounds access" << std::endl;
		std::cout << arr2[10] << std::endl; // should throw exception
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
