/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   interTemplate.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/15 16:54:43 by laura         #+#    #+#                 */
/*   Updated: 2024/07/15 16:54:43 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_INTERTEMPLATE_H
#define CPP07_INTERTEMPLATE_H

#include <cstddef>

template <typename T>
void inter(T arr[], size_t len, void (*f)(T &var)) {
	for(size_t x = 0; x < len; x++) {
		f(arr[x]);
	}
}

#endif //CPP07_INTERTEMPLATE_H
