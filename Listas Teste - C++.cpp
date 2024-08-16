#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> venda;
    list<int> estoque;
    list<int>::iterator p;
    list<int>::iterator o;
    list<int>::iterator l;
    int op;
    int n;
    int linha;
    int h;
    
    cin >> op;
    
    for(int i = 0; i < op; i++)
    {
        cin >> linha;
        
        if(linha == 1)
        {
            cin >> n;
            estoque.push_back(n);
            
        }
        else if(linha == 2)
        {
            for(p = estoque.begin(); p != estoque.end(); p++)
            {
                h = *p;
                break;
            }
            estoque.pop_front();
            venda.push_front(h);
        }
    }
    
    cout << "Estoque: ";
    for(l = estoque.begin(); l != estoque.end(); l++)
    {
        cout << *l << " ";
    }
    
    cout << endl;
		
	cout << "Venda: ";
    for(l = venda.begin(); l != venda.end(); l++)
        cout << *l << " ";
    
    
    
    
	
		return 0;
}