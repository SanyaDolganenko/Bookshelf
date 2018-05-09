#include <iostream>
#include "Book.h"
#include "Bookshelf.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    char title[]{"Title"};
    char author[]{"Author"};
    char text[]{"This is some text"};
    Book book(title, author, text, 1999);
    Bookshelf bookshelf(3, 3);
    bookshelf.putBook(&book, 0, 0);
    return 0;
}