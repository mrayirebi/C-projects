/*#include <iostream>
using namespace std;

int main(){
	cout << "Hello world" << endl; //this is just a comment
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	return 0;
}
/*Hello programming industry
I'm here to crush it big time
*/

#include <iostream>

//function declaration
void func(void);

static int count = 10; //Global variable

main() {
	while(count--){
		func();
	}
	return 0;
}

//function definition
void func(void){
	static int i = 5; //local static variable
	i++;
	std::cout << "i is " << i;
	std::cout << " and count is " << count << std::endl;
	std::cout << "variable addresses are: count: " << &count <<" variable i: " << &i << std::endl;
}