#include <iostream>
using namespace std;
struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};
int strongest(dados atletas[], int nAtletas)
{
    int i;
    int soma;
    int maiorponto = 0;
    int vencedor = 0;
    
    for(i = 0; i < nAtletas; i++)
    {
        soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        
        if(i == 1)
        {
            maiorponto = soma;
            vencedor = i;
        }
        
        if(soma > maiorponto)
        {
            maiorponto = soma;
            vencedor = i;
        }
    }
    
    return vencedor;
}
int main()
{
    dados atleta[100];
    int j;
    int atletas;
    int Vencedor;
    
    cout << "It is time to decide WHO IS THE STRONGEST!" << endl;
    cout << "So how many peoples are fighting for the title?" << endl;
    
    cin >> atletas;
    
    for(j = 0; j < atletas; j++)
    {
    	cout << "Ok then, so who is the number " << j + 1 << " to come in?" << endl;
        cin.ignore();
        getline(cin, atleta[j].nome);
        cout << "Now tell me, what was the points he got in each of the four tests?" << endl;
        cin >> atleta[j].n1;
        cin >> atleta[j].n2;
        cin >> atleta[j].n3;
        cin >> atleta[j].n4;
    }
    
    Vencedor = strongest(atleta, atletas);
    
    cout << "Looks like the winner is " << atleta[Vencedor].nome << endl;
    
    
    return 0;
    
    
}