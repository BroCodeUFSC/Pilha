#ifndef STACK_H_
#define STACK_H_

#include "StackBase.h"

template <typename T> class Stack : public StackBase {
	public:

		/**
		 * Instancia uma pilha com 5 posições
		 */
		Stack();

		/**
		 * Instancia uma pilha com tamanho especificado
		 * @param int Tamanho da pilha
		 */
		Stack(const int);

		/**
		 *
		 */
		virtual ~Stack();

		/**
		 * Adiciona o valor especificado no topo da Pilha
		 * @param Valor a ser adicionado
		 * @return Novo tamanho da Pilha
		 */
		int add(T);

		/**
		 * Remove o dado no topo da Pilha
		 * @return Valor removido
		 */
		T remove();

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

		const T* getData() const {
			return _data;
		}

		/**
		 * @return A posição do topo da pilha
		 */
		int getTopIndex() const {
			return _top;
		}

	private:

		/**
		 * Posição do topo da pilha
		 */
		int _top;

		/**
		 * Vetor com os dados da pilha
		 */
		T *_data;
};

#endif /* STACK_H_ */
