#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    //Taking Input in c++
    cout << "Enter 3 numbers : " << endl;
    cin >> a >> b >> c;

    if(a >= b && a >= c) {
        // statement will execute when ans is true
        cout << a << endl;
        return 0;   // End the program
    }
    else {
        // statement will execute when ans is false
        if(b >= a && b >= c) {
            cout << b << endl;
            return 0;
        }
        else {
            cout << c << endl;
            return 0;
        }
    }

    // 2nd variation
    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else if(b >= a && b >= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    // 3rd variation
    if(a >= b && a >= c) {
        cout << a << endl;
        return 0;
    }
    if(b >= a && b >= c) {
        cout << b << endl;
        return 0;
    }
    cout << c << endl;
}

