#include <iostream>
#include "Book.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    char title[]{"Title"};
    char author[]{"Author"};
    char text[]{"This is some text"};
    Book book(title, author, 1999, text);
    book.print();
    return 0;
}