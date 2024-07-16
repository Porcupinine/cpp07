/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/15 17:19:08 by laura         #+#    #+#                 */
/*   Updated: 2024/07/15 17:19:08 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "interTemplate.h"

void addTwo(int& x) {
	x = x+2;
}

void replace(char& c) {
	c = 'x';
}

int main () {
	{
		int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << "before\n";
		for (int y: arr) {
			std::cout << y << ", ";
		}
		inter(arr, 10, addTwo);
		std::cout << "\nafter\n";
		for (int y: arr) {
			std::cout << y << ", ";
		}
	}
	{
		char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
		std::cout << "before\n";
		for (char y: arr) {
			std::cout << y << ", ";
		}
		inter(arr, 10, replace);
		std::cout << "\nafter\n";
		for (char y: arr) {
			std::cout << y << ", ";
		}
	}
}
