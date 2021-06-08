// FilesWithGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Shoes {
    string brand;
    string color;
    int size;
};

void line(int max) {
    int i;

    for (i = 0; i < max; i++) {
        cout << "*";
    }
    cout << endl;
}


int main()
{
    struct Shoes shoe;
    
    cout << "Shoe Order Menu!\n";
    cout << "\n\t\Please enter Shoe Brand: ";
    cin >> shoe.brand;
    cout << "\n\tPlease enter shoe color: ";
    cin >> shoe.color;
    cout << "\n\tPlease enter shoe size: ";
    cin >> shoe.size;

    line(90);

    cout << shoe.brand << endl;
   
    cout << shoe.color << endl;

    cout << shoe.size << endl;
}


