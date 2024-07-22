/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/16 07:18:53 by laura         #+#    #+#                 */
/*   Updated: 2024/07/16 07:18:53 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_ARRAY_H
#define CPP07_ARRAY_H

#include <stdexcept>

template <typename T> class Array {
public:
	Array();
	Array(unsigned int n);
	Array(const Array<T>& cp);
	Array& operator=(const Array<T>& cp);
	unsigned int size();
	T& operator[](unsigned int index);
private:
	T* m_data;
	unsigned int m_size;
};

template<typename T>
T &Array<T>::operator[](unsigned int index) {
	std::string error = "Index is out of bounds\n";
	if(index >= m_size) {
		throw std::out_of_range(error);
	}
	return m_data[index];
}

template<typename T>
unsigned int Array<T>::size() {
	return m_size;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &cp) {
	if (this == &cp) {
		return *this;
	}
	m_size = cp.m_size;
	delete [] m_data;
	m_data = new T[m_size];
	for (int x =0; x < m_size; x++) {
		m_data[x] = cp.m_data[x];
	}
	return *this;
}

template<typename T>
Array<T>::Array(const Array<T> &cp) {
	m_size = cp.m_size;
	m_data = new T[m_size];
	for (int x =0; x < m_size; x++) {
		m_data[x] = cp.m_data[x];
	}
}

template<typename T>
Array<T>::Array(unsigned int n) : m_data(new T[n]()), m_size(n) {
}

template<typename T>
Array<T>::Array() : m_data(nullptr), m_size(0) {
}

#endif //CPP07_ARRAY_H
