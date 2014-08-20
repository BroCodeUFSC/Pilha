/*
 * List.h
 *
 *  Created on: 17/08/2014
 *      Author: Raphael
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
	public:
		static const int MAX_SIZE = 3, ERROR_FULL = -1, ERROR_EMPTY = -2;

		Stack();
		virtual ~Stack();

		/**
		 * Adiciona o valor especificado no topo da Pilha
		 * @return Novo tamanho da Pilha
		 */
		int add(int);

		/**
		 * Remove o dado no topo da Pilha
		 * @return Valor removido
		 */
		int remove();

		/**
		 * Indica se a pilha está cheia
		 */
		bool isFull();

		/**
		 * Indica se a pilha está vazia
		 */
		bool isEmpty();

		/**
		 * Inicializa a pilha
		 */
		void initStack();

		const int* getData() const {
			return _data;
		}

		int getTop() const {
			return _top;
		}

	private:
		int _top;
		int _data[MAX_SIZE];
};

#endif /* STACK_H_ */
