#include <iostream>

using namespace std;


int main () {
	int x;
	int z = 1;
	cin >> x;
     for (auto y = 0; y < x; y++) {
		for (auto i=0; i<3; i++) {
			if (z % 4 == 0) z++;
			cout << z++ << " ";
		}
		cout << "PUM" << endl;
	 }
	
	return 0;
}