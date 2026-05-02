#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("AZ.txt", ios::out | ios::in);

    for(char c='A'; c<='Z'; c++)
        file.put(c);

    file.seekg(9);
    cout << "10th char: " << (char)file.get() << endl;

    file.seekp(4);
    file.put('X');

    file.seekg(0, ios::end);
    cout << "Size: " << file.tellg() << endl;

    file.seekg(-1, ios::end);
    cout << "Last char: " << (char)file.get() << endl;

    file.close();
}
