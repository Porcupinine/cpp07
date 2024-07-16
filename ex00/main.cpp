/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/15 16:08:52 by laura         #+#    #+#                 */
/*   Updated: 2024/07/15 16:08:52 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.h"

int main() {
	{
		std::cout<<"Integers\n";
		int a = 5;
		int b = 6;
		std::cout<<"a: "<<a<<" b: "<<b<<"\nCalling swap!\n";
		::swap(a, b);
		std::cout<<"a: "<<a<<" b: "<<b<<"\n";
		std::cout<<"min: "<<min(a, b)<<" max: "<<max(a, b)<<"\n\n";
	}
	{
		std::cout<<"floats\n";
		float a = 5.9;
		float b = 5.5;
		std::cout<<"a: "<<a<<" b: "<<b<<"\nCalling swap!\n";
		::swap(a, b);
		std::cout<<"a: "<<a<<" b: "<<b<<"\n";
		std::cout<<"min: "<<min(a, b)<<" max: "<<max(a, b)<<"\n\n";
	}
	{
		std::cout<<"Chars\n";
		double a = 'a';
		double b = 'b';
		std::cout<<"a: "<<a<<" b: "<<b<<"\nCalling swap!\n";
		::swap(a, b);
		std::cout<<"a: "<<a<<" b: "<<b<<"\n";
		std::cout<<"min: "<<min(a, b)<<" max: "<<max(a, b)<<"\n\n";
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}
