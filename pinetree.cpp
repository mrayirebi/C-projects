#include <iostream>
#include <cstdlib>
#include <string>
#include <numeric>

int main() {

	int i;
	char char2print = "#";
	std::cout << "How tall is the tree? (In numbers) : ";
	int treeheight;
	std::cin >> treeheight;

	for (i = 1; i <= treeheight; i += 2){
		std::cout << "#" * i << std::endl;
	}



	return 0;
}