#include <iostream>

using namespace std;

int main ()  
{
	double valor;
	double somatorio = 0;
	cout.precision (2);

	
	cin >> valor;
	
	if (valor <= 2000) 
		cout << "Isento" << endl;
	
	if (valor > 4500) {
		valor -= 2000;
		somatorio += (1000*8)/100;
		valor -= 1000;
		somatorio += (1500*18)/100;
		valor -= 1500;
		somatorio += (valor*28)/100;
		cout << "R$ " << fixed << somatorio << endl;
	}
	
	if (valor <= 4500 && valor > 3000) {
		valor -= 2000;
		somatorio += (1000*8)/100;
		valor -= 1000;
		somatorio += (valor*18)/100;
		cout << "R$ " << fixed << somatorio << endl;
	}
	if (valor <= 3000 && valor > 2000) {
		valor -= 2000;
		somatorio += (valor*8)/100;
		cout << "R$ " << fixed << somatorio << endl;
	}
	
	
	
	
	
		
	
	
	return 0;
}