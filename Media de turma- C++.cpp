#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	int i;       // contador
	int alunos;  // quantidade de alunos
	int N[100];   // notas dos alunos
	int AcimaDaMedia;   // quantidade de alunos acima da media
	int AbaixoDaMedia; // quantidade de alunas abaixo da media
	float Media;  // media das notas
	int soma;     // soma utilizada para descobrir a media
	AcimaDaMedia = 0;
	AbaixoDaMedia = 0;
	
	cout << "Vamos fazer uma media de uma escola, mas quantos alunos vamos analisar?" << endl;
	
	cin >> alunos;   // inseridno a quantidade de alunos a ser analizadas
	
	cout << "Muito bem, e qual seria a nota de cada aluno?" << endl;
	
	for (i = 0; i < alunos; i++)    // pegando a cada aluno e lhes dando a nota
	{
		cin >> N[i];
	}
	soma = 0;
	for (i = 0; i < alunos; i++)     // descobrindo a media das notas entre a quantidade de alunos
	{
		soma += N[i];
		Media = 1.0*soma/alunos;
	}
	for ( i = 0; i < alunos; i++)     // checando os alunos que estao acima ou abaixo da media
    {
        if (N[i] > Media)
        {
            AcimaDaMedia++;     // alunos acima da media
        } 
        else
        {
            AbaixoDaMedia++;    // alunos abaixo da media
        }
    }
    
    cout << "Media da turma: " << Media << endl;
    cout << "Alunos com nota acima da media: " << AcimaDaMedia << endl;
    cout << "Alunos com nota abaixo da media: " << AbaixoDaMedia << endl;
    
    return 0;
}