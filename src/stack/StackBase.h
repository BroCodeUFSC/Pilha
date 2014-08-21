/*
 * StackBase.h
 *
 *  Created on: 20/08/2014
 *      Author: Raphael
 */

#ifndef STACKBASE_H_
#define STACKBASE_H_

class StackBase {
	public:
		static const int ERROR_FULL = -1, ERROR_EMPTY = -2;

		StackBase();
		virtual ~StackBase();

	protected:
		static int MAX_SIZE;
};

#endif /* STACKBASE_H_ */
