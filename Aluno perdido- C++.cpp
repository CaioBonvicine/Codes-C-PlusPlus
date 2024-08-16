#include <iostream>
using namespace std;
struct dados
{
	int matriculas;
};

int ProcurandoPorMatricula(dados estudantes[], int matriculaBuscada, int NumeroDeEstudantes) 
{
	int i; // contador
	
	for (i = 0; i < NumeroDeEstudantes; i++) // 1 + 3n + 3n + 3
	{
		if (estudantes[i].matriculas == matriculaBuscada) // 4n
		{
			return i;
		}
		
	}
	
		return -1;
	
} 

int main()
{
	dados estudantes[10000];
	int i;
	int j;
	int matriculaBuscada;
	int Estudantes;
	
	cout << "Parece que alguns alunos se perderam, voce poderia me dizer quantos?" << endl;
	
	cin >> Estudantes;
	
	cout << "Isso nao e problema, podemos acha-los facil, voce so precisa me informar a matricula deles." << endl;
	for (i = 0; i < Estudantes; i++)
	{
		cin >> estudantes[i].matriculas;
	}
	
	cout << "E qual aluno voce estaria especificamente procurando? (informe a matricula do alunoe). " << endl;
	cin >> matriculaBuscada;
	
	j = ProcurandoPorMatricula(estudantes, matriculaBuscada, Estudantes);
	
	if(j == -1)
	{
		cout << "Nao localizado" << endl;
	}
	else
	{
		cout << "Corredor " << j << endl;
	}
	

	return 0;
}