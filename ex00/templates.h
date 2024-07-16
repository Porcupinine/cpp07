/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/15 15:54:49 by laura         #+#    #+#                 */
/*   Updated: 2024/07/15 15:54:49 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_TEMPLATES_H
#define CPP07_TEMPLATES_H

template <typename T>
void swap(T&a, T&b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	if(a < b)
		return a;
	return b;
}

template < typename T >
T max(T a, T b) {
	if(a > b)
		return a;
	return b;
}

#endif //CPP07_TEMPLATES_H
