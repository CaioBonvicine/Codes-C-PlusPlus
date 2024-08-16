#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double R;
	double N;
	double A;
	
	cout << "We need to find the area of a circle, so what is radios?" << endl;
	
	cin >> R;
	N = 3.14159;
	A = N*pow(R,2); 
	
	cout << fixed << setprecision(4);
	cout << " Area = " << A << endl;
	
	
	return 0;
}
