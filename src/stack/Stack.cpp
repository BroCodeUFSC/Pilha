/*
 * List.cpp
 *
 *  Created on: 17/08/2014
 *      Author: Raphael
 */

#include "Stack.h"

Stack::Stack() {
	_top = -1;
}

Stack::~Stack() {
	delete &_top;
	delete[] &_data;
}


void Stack::initStack() {
	for(int i = _top - 1; i >= 0; i--) {
	    _data[i] = 0;
    }

	_top = -1;
}

int Stack::add(int value) {
	if(isFull()) {
		return ERROR_FULL;
	}

	_top++;

	_data[_top] = value;

	return _top + 1;
}

int Stack::remove() {
	if(isEmpty()) {
		return ERROR_EMPTY;
	}

	_top--;

	return _data[_top + 1];
}

bool Stack::isFull() {
	return _top == (MAX_SIZE - 1);
}

bool Stack::isEmpty() {
	return _top == -1;
}
