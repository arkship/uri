#include <iostream>
#include <cmath>
using namespace std;


int main () {
	
	int x;
	
	cin >> x;
	for (auto y = 1; y <= x; y++) {
		for (auto i = 1; i<=3;i++) {
			cout << pow(y,i) << " ";
			
		}
	cout << endl;
	}
	return 0;
}