#include <iostream>

using namespace std;

int main()
{
	int i;
    int videos;  // quantidade de videos a serem analizados
    int N[1000];   // quantidade de views a serem analizadas
    int TotalMaior;   // total de videos com mais de 10m de views
    int TotalMenor;    // total de videos com menos de 10m de views
    TotalMaior = 0;
    TotalMenor = 0;
    
    cout << "Vamos analisar alguns videos, mas quantos?" << endl;

    cin >> videos;   // inserindo a quantidade de videos que vao ser analizados
    
    cout << "E qual é a quantidade de views de cada video?" << endl;

    for ( i = 0; i < videos; i++)  // pegando cada video e inserindo a quantidade de views de cada um
    {
        cin >> N[i];   // inserindo a quantidade de views de cade video
    }
    
    for ( i = 0; i < videos; i++)  // pegando a quantidade de videos inseridos e analizando qual possui mais ou menos de 10M views
    {
        if (N[i] >= 10000000)   // se possuir 10m ou mais de views, ele entra no grupo dos videos com mais de 10M de views
        {
            TotalMaior++;  // adicionando 1 ao total maior
        } 
        else   // se nao possuir 10m ou mais de views, ele entra no grupo dos videos com menos de 10M de views
        {
            TotalMenor++;  // adicionando 1 ao total menor
        }
    }
    
    cout << TotalMaior << " video(s) com mais de 10M views" << endl;   // monstrando a quantidade de videos com 10M ou mais de views
    cout << TotalMenor << " video(s) com menos de 10M views" << endl;  // mostrando a quantidade de videos com menos de 10M

    return 0;    // fim do codigo
}