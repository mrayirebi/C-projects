#include <iostream>
using namespace std;

int factorial(int x) {
	if (x==1) {
		return 1;
	}else {
		return x * factorial(x-1);
	}
}

int main() {
	cout << "Enter a number: " << endl;
	int input;
	cin >> input;
	cout << "You entered " << input <<
	", the factorial of " << input <<
	" is " << factorial(input);

	return 0;
}