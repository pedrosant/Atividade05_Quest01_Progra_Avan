using namespace std;
class VetorDinamico{
private:
	int tamanhoVetor;
	bool elemeDupli;
	int vetor[5];


public:
	VetorDinamico();
	VetorDinamico(int tamanhoInicialVetor);
	VetorDinamico(int tamanhoInicialVetor, bool elemeDupli);

	bool add(bool elemento);
	int add(int index, int elemento);
	void clean(int vetor);
	bool contains(int vetor, int elemento);
	int getIesimoElemento(int elemento);
	int indexof(int elemento);
	bool isEmpty(int vetor[]);
	int lastIndexOf(int elemento);
	int remove(int index);
	int size(int vetor[]);
	void (int tamanhoAumentado);
	void imprimir(vetor[]);
};

