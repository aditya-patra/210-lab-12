/*
Aditya Patra
Arrays Assignment

Purpose:write a program with real-world applications incorporating std::array functions
This program performs and analysis of daily average temperatures during the month of January
*/
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;

int main() {
    const int SIZE = 31;
    ifstream fin;
    array<int, SIZE> numbers;
    string month;
    fin.open("array_info.txt");
    if (fin.good( )) {
        fin >> month;
        for(int i = 0; i < SIZE; i++) {
            fin >> numbers[i];
        }
        fin.close( );
    }
    else
        cout << "File not found.\n";
}
