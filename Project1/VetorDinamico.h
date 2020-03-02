#include<array>

class VetorDinamico{
	int tamanhoVetor;
	bool elemeDupli;
	int vetor[5];
	bool add(bool elemento);
public:
	VetorDinamico() {

	}
	VetorDinamico(int tamanhoInicialVetor) {
		this->tamanhoVetor = tamanhoInicialVetor;

	}
	VetorDinamico(int tamanhoInicialVetor, bool elemeDupli) {
		this->tamanhoVetor = tamanhoInicialVetor;
		this->elemeDupli = elemeDupli;
	}

	bool add(bool elemento) {
		bool resultado;
		for (int i = 0; i < sizeof(vetor) / 4; i++) {
			if (this->vetor[i] == NULL) {
				resultado = true;
				break;
			}
		}
		return resultado;
	}

	int add(int elemento) {
		for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
			this->vetor[i] = elemento;
		}
	}

	void clean(int vetor) {
		for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
			clean(vetor);
		}
	}

	bool contains(int vetor, int elemento) {
		bool resultado;
		for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
			if (this->vetor[i] == elemento) {
				resultado = true;
				break;
			}
		}
		return resultado;
	}

	int getIesimoElemento(int elemento) {
		int resultado;
		for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
			if (i == elemento){
				resultado = vetor[i];
				break;
			}
		}
		return resultado;
	}
	
	int indexof(int elemento) {
		int resultado;
		for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
			if (vetor[i] == elemento){
				resultado = i;
			}
		}
		return resultado;
	}

	bool isEmpty(int vetor[]) {
		for ( int i = 0; i < sizeof(vetor) / sizeof(vetor[0]);i++){
			
		}
	}
};

