#include <iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;
};

class Library {
    Book books[10];
    int count = 0;

public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 10) return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " "
                 << books[i].author << " "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library::removeBooks(string &ISBN) {
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

int main() {
    Library lib;

    string t, a, i;

    t="A"; a="AA"; i="1"; lib.addNewBook(t,a,i);
    t="B"; a="BB"; i="2"; lib.addNewBook(t,a,i);
    t="C"; a="CC"; i="3"; lib.addNewBook(t,a,i);
    t="D"; a="DD"; i="4"; lib.addNewBook(t,a,i);
    t="E"; a="EE"; i="5"; lib.addNewBook(t,a,i);

    lib.displayDetails();

    string rem = "3";
    lib.removeBooks(rem);

    cout << "\nAfter Removal:\n";
    lib.displayDetails();

    return 0;
}
