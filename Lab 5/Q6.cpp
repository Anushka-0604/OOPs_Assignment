#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    float price;

    void input() {
        cout << "Enter title, author and price:\n";
        cin >> title >> author >> price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void inputText() {
        input(); 
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayText() {
        display(); 
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook t;

    t.inputText();
    t.displayText();

    return 0;
}
