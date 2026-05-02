#include <iostream>
#include <fstream>
using namespace std;

void countAlpha() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while(fin.get(ch)) {
        if(isalpha(ch))
            count++;
    }

    cout << "Alphabets: " << count;
    fin.close();
}

int main() {
    countAlpha();
}
