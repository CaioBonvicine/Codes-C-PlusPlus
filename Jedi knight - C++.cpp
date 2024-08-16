#include <iostream>
using namespace std;

struct dados
{
    string nome;
    int base;
};
int main()
{
    dados jedi[100];
    int i;
    int Njedis;
    string jediaprocura;
    
    cout << "Looking for a jedi knight? well, how many jedi knight are we talking about?" << endl;
    
    cin >> Njedis;
    
    cout << "So, you are looking for " << Njedis << " jedis..." << endl;
    
    for(i = 0; i < Njedis; i++)
    {
    	cout << "Ok then, say me the name of the jedi number " << i + 1 << endl;
        cin.ignore();
        getline(cin, jedi[i].nome);
        cout << "good, now in which base are the jedi?" << endl;
        cin >> jedi[i].base;
    }
    
    cin.ignore();
    
    cout << "and what is the jedi you are looking for?" << endl;
    getline(cin, jediaprocura);
    
    for(i = 0; i < Njedis; i++)
    {
        if(jediaprocura == jedi[i].nome)
        {
            cout << "well, that jedi knight is in base " << jedi[i].base << endl;
            break;
        }
        
        if(i == Njedis - 1 && jediaprocura != jedi[i].nome)
        {
            cout << "sorry, we couldnt find that jedi" << endl;
            break;
        }
    }
    
    
    return 0;
}