#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
	int result = 1;
	for (int i =0; i < powNum; i++){
		result = result * baseNum;
	}
	return result;
}
int main (){
	int a, b;
	cout << "Enter two numbers and get the first number raised to the second: " << endl;
	cin >> a >> b;
	cout << "You typed " << a << " and " << b << endl;
	cout << a <<" raised to the power of " << b <<" is " << power(a, b);

	return 0;
}