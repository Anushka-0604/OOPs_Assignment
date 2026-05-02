#include <iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;

    Book() {}


    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library {
    Book books[10];
    int count = 0;

public:
    void add(Book b) {
        books[count++] = b;
    }

    bool removeBooks(string ISBN) {
        for (int i = 0; i < count; i++) {
            if (books[i].ISBN == ISBN) {
                for (int j = i; j < count - 1; j++)
                    books[j] = books[j + 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " "
                 << books[i].author << " "
                 << books[i].ISBN << endl;
        }
    }
};

int main() {

    Book b1("A","AA","1"), b2("B","BB","2");

    Book *b3 = new Book("C","CC","3");

    Library lib;
    lib.add(b1);
    lib.add(b2);
    lib.add(*b3);

    lib.displayDetails();

    return 0;
}
