#include <iostream>

using namespace std;


int main () {
	
	int x;
	int y;
	
	cin >> x;
	cin >> y;
		if (x >=0 && y>=0) {
		
			if (x<y) {
				
				for (auto i=x+1; i<y; i++) {
					if (i%5 == 2 || i%5 == 3)
						cout << i << endl;
				}
			}	
			if (x>y) {
					
					for (auto i=y+1; i<x; i++) {
						if (i%5 == 2 || i%5 == 3)
							cout << i << endl;
					}
				}		
		}		
	return 0;
}