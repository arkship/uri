#include <iostream>

using namespace std;

int main () {
	int x;
	int y;
	int soma = 0;
	
	cin >> x;
	cin >> y;
	
	if (x<y) {
		
		for (auto i=x; i<=y; i++) {
			if (!(i % 13 == 0)) 
				soma += i;
		}
	}	
	if (x>y) {
			
			for (auto i=y; i<=x; i++) {
				if (!(i % 13 == 0)) 
					soma += i;
			}
		}		
	cout << soma << endl;
	
	
	return 0;
}