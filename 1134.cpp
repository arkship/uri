#include <iostream>

using namespace std;


int main () {
	int alcool = 0;
	int gasolina = 0;
	int diesel = 0;
	int x; 
	
	do {
		cin >> x;
		
		if(x == 1) alcool++;
		if (x ==2) gasolina++;
		if (x==3) diesel++;
	}
	while (x !=4);
		
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl;

	return 0;
}