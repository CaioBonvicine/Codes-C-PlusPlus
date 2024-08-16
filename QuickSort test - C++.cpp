#include <iostream>
using namespace std;
void quicksort(int vetor[], int inicio, int fim)
{
	int pivo = vetor[(inicio + fim) / 2];
	int i = inicio;
	int j = fim;
	int aux;
	
	while(i <= j)
	{
		while(vetor[i] < pivo)
			i++;
	
		while(vetor[j] > pivo)
			j--;
		
		if(i <= j)
		{
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	
	if(inicio < j)
		quicksort(vetor, i, fim);
	if(i < fim)
		quicksort(vetor, inicio, j);
}

int main()
{
	int n = 7;
	int vetor[7] = {34,3,2,8,5,13,21};
	quicksort(vetor,0,n-1);
	for(int i = 0; i < n; i++)
		cout << vetor[i] << " ";
	cout << endl;
	return 0;
}