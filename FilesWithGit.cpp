// FilesWithGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


// ----- Shoes Struct -----
struct Shoes {
    string brand;
    string color;
    float size;
};

// ----- Line function -----
void outline(int max) {
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

    // ---writiing into the txt file
    ofstream outfile;
    outfile.open("shoe.txt", ios::out);

    for (i = 0; i < 5; i++) {
        outfile << shoe[i].brand << " ";
        outfile << shoe[i].color << " ";
        outfile << shoe[i].size << " " << endl;
    }
    outfile.close();

    // --- reading the file 
    ifstream infile;
    infile.open("shoe.txt", ios::in);
    cout << "\nshoe.txt is opned in \"in\" mode to read" << endl;
    string readData;
    float shoeSize;

    while (getline(infile, readData)) {
        cout << "\nData from file: " << readData << endl;
    }
    infile.close();

    // --- checking file to see if size exists
    infile.open("shoe.txt", ios::in);
    cout << "\nEnter size for you are looking for: ";
    cin >> shoeSize;

    string line;
    string brandCol, colorCol;
    int sizeCol;
    int flag = 0;

    while (getline(infile, line)) {
        istringstream linestream(line);
        linestream >> brandCol >> colorCol >> sizeCol;
        if (shoeSize == sizeCol){
            flag = 1;
        }
    }

    if (flag == 1) {
        cout << "size found\n";
    }
    else {
        cout << "size not found\n";
    }

    infile.close();

    outline(90);

}


