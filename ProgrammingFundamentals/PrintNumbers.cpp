#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentNumber = 1;
    //While Numbers
    while(currentNumber <= n) {
        cout << currentNumber << endl;
        currentNumber = currentNumber + 1;
    }

    return 0; 
}

