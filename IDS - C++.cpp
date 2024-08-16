#include <iostream>
using namespace std;
struct dados
{
	int ID;
};

int ProcurandoPorId(int NumeroDeFuncionarios, int IdBuscado, dados ids[]) 
{
	int inicio = 0; // 1
	int fim = NumeroDeFuncionarios - 1;  // 3
	int divisao;
	
	while(inicio <= fim) // 3 log n
	{
		divisao = (inicio + fim) / 2; // 5 log n
	
		if(ids[divisao].ID == IdBuscado) // 4 log n 
		{
			return divisao; // 1 * 0 = 0
		}
		else if(IdBuscado > ids[divisao].ID) // 4 log n
		{
			inicio = divisao + 1; // 3 log n ou 0
		}
		else
		{
			fim = divisao - 1;   //  3 log n ou 0
		}
		
	}
	
	return -1;                   // 0
	
}  // 26 log n + 4

int main()
{
	dados ids[20];
	int i = 0;
	int j;
	int IDBuscado;
	
	cout << "Vamos analisar os ids de funcionarios de uma empresa." << endl;
	cout << "Continue inserindo ids ate colocar -1, o que encerrara o processo." << endl;
	
	while(true)
	{
		cin >> ids[i].ID;
		
		if(ids[i].ID == -1)
		{
			break;
		}
		i++;
	}
	cout << "E qual dos ids informados, voce esta deseja testar se possui acesso ou nao?" << endl;
	cin >> IDBuscado;
	j = ProcurandoPorId(i, IDBuscado, ids);
	if(j != -1)
	{
		cout << "Possui acesso" << endl;
	}
	else if( j == -1)
	{
		cout << "Nao possui acesso" << endl;
	}
	

	return 0;
}