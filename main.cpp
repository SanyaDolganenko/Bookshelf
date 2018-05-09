#include <iostream>
#include "Book.h"
#include "Bookshelf.h"

int main() {
    char title[]{"Title"};
    char author[]{"Author"};
    char text[]{"This is some text"};
    Book book(title, author, text, 1999);
    Bookshelf bookshelf(3, 3);
    bookshelf.printFreeBookSpots();
    bookshelf.putBook(&book, 0, 0);
    bookshelf.printFreeBookSpots();
    bookshelf.takeBook(0, 0);
    bookshelf.takeBook(0, 0);
    return 0;
}