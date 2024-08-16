#include <iostream>
using namespace std;

int main()
{
	int a;
	a = 25;
	
	int * p;
	p = &a;
	
	cout << a << endl;
	cout << &a << endl;
	
	cout << p << endl;
	cout << * p << endl;
	
	(*p) = 26;
	
	cout << a << endl;
	
	int vetor[10];
	vetor[0] = 25;
	cout << vetor[0] << endl;
	cout << vetor << endl;
	cout << &vetor[0] << endl;
	
	*vetor = 27;
	cout << vetor[0] << endl;
	
	return 0;
}