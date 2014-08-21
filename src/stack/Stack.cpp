/*
 * List.cpp
 *
 *  Created on: 17/08/2014
 *      Author: Raphael
 */

#include "Stack.h"

template <class T>
Stack<T>::Stack() {
		MAX_SIZE = 5;
		_data = new T[5];
		_top = -1;
}

template <class T>
Stack<T>::Stack(const int maxSize) {
	MAX_SIZE = maxSize;
	_data = new T[maxSize];
	_top = -1;
}

template <class T>
Stack<T>::~Stack() {
	delete &_top;
	delete[] &_data;
}


template <class T>
void Stack<T>::initStack() {
	for(int i = _top - 1; i >= 0; i--) {
	    delete _data[i];
		_data[i] = new T;
    }

	_top = -1;
}

template <class T>
int Stack<T>::add(T const value) {
	if(isFull()) {
		return ERROR_FULL;
	}

	_top++;

	_data[_top] = value;

	return _top + 1;
}

template <class T>
T Stack<T>::remove() {
	if(isEmpty()) {
		return ERROR_EMPTY;
	}

	_top--;

	return _data[_top + 1];
}

template <class T>
bool Stack<T>::isFull() {
	return _top == (MAX_SIZE - 1);
}

template <class T>
bool Stack<T>::isEmpty() {
	return _top == -1;
}
