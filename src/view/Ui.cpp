#include "Ui.h"

Ui::Ui() {
	_stack.initStack();
}

Ui::~Ui() {
	_stack.~Stack();
	delete &_stack;
}

void Ui::doStuff() {
	cout << "Bem vindo!" << endl;

	int option;

	do {
		option = showMenu();

		if(option == INVALID_ANSWER) {
			cout << "\n-----------------\nOpção inválida!\n-----------------\n" << endl;
		}
	} while(option != EXIT);
}

int Ui::showMenu() {
	int option =
	        ask(
	                "\nPilhas:\n-----------\nDigite o numero da opção desejada:\n[1] Empilhar Elemento\n[2] Desempilhar Elemento\n[3] Limpar Pilha\n[4] Mostrar Pilha\n[5] Sair\n\n");

	switch(option) {
		case ADD_ELEMENT:
			addValue();
			return ADD_ELEMENT;

		case REMOVE_ELEMENT:
			remove();
			return REMOVE_ELEMENT;

		case CLEAR_STACK:
			clearStack();
			return CLEAR_STACK;

		case SHOW_STACK:
			showStackValues();
			return SHOW_STACK;

		case EXIT:
			cout << "\n\nTchau! (:";
			return EXIT;

		default:
			return INVALID_ANSWER;
	}
}

void Ui::addValue() {
	int value = ask("\nDigite o elemento a ser empilhado");
	int ans = _stack.add(value);

	if(ans == StackBase::ERROR_FULL) {
		cout << "\nErro: pilha cheia!" << endl;
	} else {
		cout << "\nValor empilhado corretamente!" << endl;
	}
}

void Ui::remove() {
	cout << "\nDesempilhando um valor" << endl;
	int ans = _stack.remove();


	if(ans == StackBase::ERROR_EMPTY) {
		cout << "\nErro: pilha vazia!" << endl;
	} else {
		cout << "\nValor desempilhado: " << ans << endl;
	}
}

void Ui::clearStack() {
	_stack.initStack();
	cout << "\nPilha limpa!" << endl;
}

void Ui::showStackValues() {
	if(_stack.isEmpty()) {
		cout << "\nA pilha está vazia!" << endl;
		return;
	}

	const int* data = _stack.getData();

	cout << "\nPosição     Valor" << endl;

	for(int i = 0; i < _stack.getTopIndex() + 1; i++) {
	    printf("%d%14d\n", (i + 1), data[i]);
    }
}


int Ui::ask(const char* message) {
	cout << message << "\n>";

	void *aux;
	int ret;

	do {
		cin >> aux;

		try {
			ret = (int)aux; //converter
		} catch(const exception &e) {
			continue;
		}
	} while(false);

	return ret;
}
