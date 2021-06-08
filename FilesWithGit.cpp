// FilesWithGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
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
    struct Shoes shoe[5];
    struct Shoes* ptrshoe = shoe;
    int i;
    


    for (i = 0; i < 5; i++) {
        cout << "Shoe Order Menu!\n";
        cout << "\n\t\Please enter Shoe Brand: ";
        cin >> shoe[i].brand;
        cout << "\n\tPlease enter shoe color: ";
        cin >> shoe[i].color;
        cout << "\n\tPlease enter shoe size: ";
        cin >> shoe[i].size;
        ptrshoe++;
    }


    ofstream outfile;
    outfile.open("shoe.txt", ios::out);

    for (i = 0; i < 5; i++) {
        outfile << shoe[i].brand << " ";
        outfile << shoe[i].color << " ";
        outfile << shoe[i].size << " " << endl;
    }

    outfile.close();
    line(90);

   
}


