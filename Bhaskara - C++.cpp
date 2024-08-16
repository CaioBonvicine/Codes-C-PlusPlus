#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(5);
	double a;
	double b;
	double c;
	double X;                     // X representa a segunda raiz
	double Y;                     // Y representa a primeira raiz
	
	cout << "Vamos realizar um calculo de Bhaskara, logo, precisamos que informe, nessa ordem, o A, B e C." << endl;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a == 0 || (b * b -4 * a * c) < 0)
    {
        cout << "Impossivel calcular" << endl;
    }else
    {
        X = (-b - sqrt((b * b -4 * a * c)))/(2 * a);
        Y = (-b + sqrt((b * b -4 * a * c)))/(2 * a);

        cout << "R1 = " << Y << endl;
        cout << "R2 = " << X << endl;

    }
	return 0;
}