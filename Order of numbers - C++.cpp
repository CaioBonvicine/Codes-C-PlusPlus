#include <iostream>
using namespace std;
void selection_sort(int vetor[], int n, int menor)
{
    
    for(int j =0 ; j < n; j++)
	{
		int pos_menor = j;
    	menor = vetor[j];
    	int aux;
    	for(int i = j + 1 ; i < n; i++)
		{
        	if(vetor[i] < menor)
			{
	  		   	menor = vetor[i];	
	   		}
			aux = vetor[j];
			vetor[j] = menor;
			vetor [pos_menor] = aux;
		}
	}
}
int main()
{
	int vetor[100];
	int menorvalor;
	int i = 0;
	int j = 0;
	int u;
	
	cout << "Please, inform any positives intergers numbers in any order" << endl;
	cout << "when you want to stop, type -1." << endl;
	
	while(true)
	{
		j++;
		cin >> vetor[i];
		
		if(vetor[i] == -1)
		{
			break;
		}
		i++;
	}
	
	selection_sort(vetor, j, menorvalor);
	
	cout << "lets put them in the right order now." << endl;
	
	for(u = 0; u < j; u++)
	{
		cout << menorvalor << endl;
	}
	
	

	return 0;
}