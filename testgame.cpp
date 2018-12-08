#include <iostream>
#include <string>

using namespace std;


int main() {
	int sumof;
	int myArray[5];
	for (int x = 0; x < 5; x++){
		cin >> myArray[x];
		sumof = myArray[x] + myArray[x];
	}
	cout << sumof << endl;
	return 0;
}