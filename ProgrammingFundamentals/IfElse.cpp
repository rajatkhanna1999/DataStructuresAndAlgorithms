#include <iostream>
using namespace std;

int main() {
    
    int b = 5;
    if(b > 1) {
        cout << "Hi" << endl;
        return 0;
    }
    if(b > 2) {
        cout << "Hello" << endl;
    }    
    
    // int a = 3;
    int a = 10;

    if(a > 5) {
        cout << "Hi" << endl;
    }
    else if(a > 4) {
        cout << "Hey" << endl;
    }
    else if(a > 3) {
        cout << "abc" << endl;
    }
    else if(a > 2) {
        cout << "xyz" << endl;
        cout << "def" << endl;
    }
    else {

    }
    cout << "Hello" << endl;
}

