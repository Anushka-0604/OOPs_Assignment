#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter string: ";
    cin.getline(str,100);

    cout << "Length: " << strlen(str) << endl;

    ofstream fout("data.txt");
    fout << str;
    fout.close();

    ifstream fin("data.txt");
    cout << "From file: ";
    fin.getline(str,100);
    cout << str;

    fin.close();
}
