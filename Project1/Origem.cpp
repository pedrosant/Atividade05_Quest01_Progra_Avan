#include<iostream>
#include<array>
#include<VetorDinamico.h>

using namespace::std;
int vetor[5];
int main() {
	
	VetorDinamico vetorDinamico();
	vetor = VetorDinamico::add(0,5);
	for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
		cout << vetor[i];
	}

	system("PAUSE");
	return 0;
}