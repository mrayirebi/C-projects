#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void DoubleArray(int* arr, int size);
void AssignAge3(int* pAge);

int main() {
	//Double every value inside of the array
	int arr[] = {1,2,3,4};
	DoubleArray(arr, 4);
	for(int i = 0; i < 4; ++i){
		std::cout << "Array " << arr[i] << "\n";
	}

	//Change the value of a variable using a function and a pointer
	int age = 43;
	AssignAge3(&age);
	std::cout << "Pointer Age " << age << "\n";



	return 0;
}


//functions
void DoubleArray(int* arr, int size){
	for (int i = 0; i < size; ++i){
		arr[i] = arr[i] * 2;
	}
}


void AssignAge3(int* pAge){
	*pAge = 22;
}

//End functions