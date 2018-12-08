#include <iostream>
using namespace std;

int main () {

    int secretNum = 9;
    int guess;

    do {
        cout << "Guess the correct number: " << endl;
        cin >> guess;
       
    }while (secretNum != guess);

    cout << "Yaay! you're right :)";

    return 0;
}
