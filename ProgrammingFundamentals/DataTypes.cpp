#include <iostream>
using namespace std;

int main() 
{
	//There are several Data types in c++, some
	//of important data type are
	//1) Integer
	//2) Character
	//3) Boolean
	//4) Floating Point
	//5) Double
	//6) Void

	//Int Data Type
	int a1 = 60;
    cout << a1 << endl;

    //Char Data Type
    char b1 = 'A';
    cout << b1 << endl;


	//Boolean Data Type
    bool c1 = true;
    cout << c1 << endl;


    //Playing with data types
    int a = 100;
    char b = 'A';

    int c = a + b;
    cout << c << endl;

    char d = a + b;
    cout << d << endl;

    int x = '?';
    cout << x << endl;

    bool b2 = false;
    bool c2 = 1000;
    bool d2 = 0;
    bool e2 = -1;
    cout << e2 << endl;
 
 	//Storing Char in Int
    int a3 = 'A';
    cout << a3 << endl;//Prints ASCII Value of that Character

    //Char Data Type
    char b3 = 65;
    cout << b3 << endl;

    //Typecating
    int c = 65;
    cout << c << endl;
    cout << (char)c << endl;

    //If we want to typecast an integer to charcter,
    //It is done by (char)a where a is integer to be typecasted

    unsigned int a = -1;

    cout << a << endl;
}

