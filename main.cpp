/*
Aditya Patra
Arrays Assignment

Purpose:write a program with real-world applications incorporating std::array functions

*/
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;

int main() {
    const int SIZE = 30;
    ifstream fin;
    array<int, SIZE> numbers;
    fin.open("array_info.txt");
    if (fin.good( )) {
        for(int i = 0; i < SIZE; i++) {
            fin >> numbers[i];
        }
        fin.close( );
    }
    else
        cout << "File not found.\n";
}
