#include <iostream>
using namespace std;

int main() {

    int p = 10;
    int r = 5;
    int t = 1;   
    double z = 10;

    int si1 = (p * r * t) / 100.0;
    double si2 = (p * r * t) / 100;
    double si3 = (p * r * t) / 100.0;

    cout << "Simple Interest is : " << si3 << endl;
}

