#include "VetorDinamico.h"
#include<iostream>;

using namespace::std;

VetorDinamico::VetorDinamico() {

}
VetorDinamico::VetorDinamico(int tamanhoInicialVetor) {
	this->tamanhoVetor = tamanhoInicialVetor;

}
VetorDinamico::VetorDinamico(int tamanhoInicialVetor, bool elemeDupli) {
	this->tamanhoVetor = tamanhoInicialVetor;
	this->elemeDupli = elemeDupli;
}

bool VetorDinamico::add(bool elemento) {
	bool resultado;
	for (int i = 0; i < sizeof(vetor) / 4; i++) {
		if (this->vetor[i] == NULL) {
			resultado = true;
			break;
		}
	}
	return resultado;
}

int VetorDinamico::add(int index, int elemento) {
	vetor[index] = elemento;
	return vetor;
}

void VetorDinamico::clean(int vetor) {
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
		clean(vetor);
	}
}

bool VetorDinamico::contains(int vetor, int elemento) {
	bool resultado;
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
		if (this->vetor[i] == elemento) {
			resultado = true;
			break;
		}
	}
	return resultado;
}

int VetorDinamico::getIesimoElemento(int elemento) {
	int resultado;
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
		if (i == elemento) {
			resultado = vetor[i];
			break;
		}
	}
	return resultado;
}

int VetorDinamico::indexof(int elemento) {
	int resultado;
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {
		if (vetor[i] == elemento) {
			resultado = i;
			break;
		}
	}
	return resultado;
}

bool VetorDinamico::isEmpty(int vetor[]) {
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++) {

	}
}

int VetorDinamico::lastIndexOf(int elemento) {
	int resultado;
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
		if (vetor[i] == elemento){
			resultado = i;
		}
	}
	return resultado;
}

int VetorDinamico::remove(int index) {
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){

	}
}

int VetorDinamico::size(int vetor[]){
	int resultado = sizeof(vetor) / sizeof(vetor[0]);
	return resultado;
}

void VetorDinamico::resize(int tamanhoAumentado) {

}

void VetorDinamico::imprimir(vetor[]) {
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
		cout "Vetor"<< vetor[i];
	}
}