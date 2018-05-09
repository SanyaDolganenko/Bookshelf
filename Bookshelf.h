//
// Created by Admin on 5/9/18.
//

#ifndef BOOKSHELF_BOOKSHELF_H
#define BOOKSHELF_BOOKSHELF_H

#include <cstdlib>
#include "Book.h"

class Bookshelf {
public :
    int capacityRows;
    int capacityColumns;
    Book **books;

    Bookshelf(int capacityRows, int capacityColumns);

    void addBook(Book *book);

    void printAllBooks();

private:
    int lastBookRow;
    int lastBookColumn;

};

Bookshelf::Bookshelf(int capacityRows, int capacityColumns) : capacityRows(capacityRows),
                                                              capacityColumns(capacityColumns) {
    books = (Book **) malloc(capacityRows * sizeof(Book *));
    for (int i = 0; i < capacityRows; i++) {
        books[i] = (Book *) malloc(capacityColumns * sizeof(Book));
    }

    lastBookRow = 0;
    lastBookColumn = -1;
}

void Bookshelf::addBook(Book *book) {
    if ((lastBookColumn == capacityColumns - 1)
        && (lastBookRow == capacityRows - 1)) {
        printf("\nBookshelf is full!\n");
    } else {
        if (lastBookColumn == capacityColumns - 1) {
            lastBookColumn = 0;
            lastBookRow++;
        } else {
            lastBookColumn++;
        }
        books[lastBookRow][lastBookColumn] = *book;
    }
}

void Bookshelf::printAllBooks() {
    for (int i = 0; i <= lastBookRow; i++) {
        for (int b = 0; b < capacityColumns; b++) {
            if (i == lastBookRow && b > lastBookColumn) {
                return;
            } else {
                books[i][b].print();
            }
        }
    }
}


#endif //BOOKSHELF_BOOKSHELF_H
