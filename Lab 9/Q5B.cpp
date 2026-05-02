#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "Hello this is a sample file.\nSecond line here.";
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(9);

    cout << "Position: " << fin.tellg() << endl;

    char ch;
    while(fin.get(ch))
        cout << ch;

    fin.close();
}
