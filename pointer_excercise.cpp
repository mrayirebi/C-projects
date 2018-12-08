/*Create a function that is going to recieve a 
starting value, a max value and an increment amount
between said values. After that the function is going to
return a vector as a return type*/

/*Using the same function, take 3 inputs,
How much to invest
Interest Rate
Return value after 10 years*/

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int strtVal, int max, int incAmount);

int main() {
	//Assignment 1
	std::vector<int> range = Range(1, 50, 4);
	for(auto y: range) std::cout << y << "\n";

	//Assignment 2
	double investment = 0.0, interestRate = 0.0;
	std::cout << "How much would you like to invest : ";
	std::cin >> investment;
	std::cout << " Interest Rate : ";
	std::cin >> interestRate;
	interestRate *= .01;

	for (auto y: Range(1, 10, 1)){
		investment += (investment * interestRate);
	}

	std::cout << "Value after 10 years : " << investment << std::endl;


	/*
	1. Decrement spaces by one each time through the loop
	2. Increment the hashes by 2 each time
	3. Save spaces to the stump by calculating tree height -1
	4. Decrement from tree height until equals zero
	5. Print spaces and then hashes for each row
	6. Print stump spaces and then 1 hash
	*/

	std::cout << "How tall is the tree : ";
	int treeHeight = 0, spaces = 0, hashes = 1, stumpSpaces = 0;
	std::cin >> treeHeight;
	spaces = treeHeight - 1;
	stumpSpaces = treeHeight - 1;

	while (treeHeight != 0){
		for (auto x: Range(1, spaces, 1))
			std::cout << " ";

		for (auto x: Range(1, hashes, 1))
			std::cout << "#";

		std::cout << "\n";
		spaces -= 1;
		hashes += 2;
		treeHeight -= 1;
	}

	for (auto x: Range(1, stumpSpaces, 1))
		std::cout << " ";
	std::cout << "#\n";


	

	return 0;
}


//Funtions
std::vector<int> Range(int strtVal, int max, int incAmount){

	//Every while statement needs an index to start with.
	int i = strtVal;

	//Will hold returning vector.
	std::vector<int> range;

	//Make sure we don't go past max value.
	while(i <= max){
		range.push_back(i);
		i += incAmount;
	}
	return range;
}
