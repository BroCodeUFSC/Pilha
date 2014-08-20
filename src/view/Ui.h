/*
 * Ui.h
 *
 *  Created on: 17/08/2014
 *      Author: Raphael
 */

#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <stdio.h>
#include "../stack/Stack.h"

using namespace std;


class Ui {
	public:
		static const int ADD_ELEMENT = 1, REMOVE_ELEMENT = 2, CLEAR_STACK = 3, SHOW_STACK = 4, EXIT = 5, INVALID_ANSWER = -1;

		Ui();
		virtual ~Ui();

		/**
		 * Adiciona um valor à pilha
		 */
		void addValue();

		/**
		 * Remove um valor da pilha
		 */
		void remove();

		/**
		 * Limpa a lista
		 */
		void clearStack();

		/**
		 * Mostra os valores contidos na pilha
		 */
		void showStackValues();

		/**
		 * Roda a porra toda
		 */
		void doStuff();

		/**
		 * Exibe o menu do problema
		 */
		int showMenu();

		/**
		 * Pede ao usuário um valor inteiro exibindo a mensagem especificada
		 */
		int ask(const char*);

	private:
		Stack _stack;
};

#endif /* UI_H_ */
