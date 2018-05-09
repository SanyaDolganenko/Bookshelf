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

    void putBook(Book *book, int row, int column);

    void takeBook(int row, int column);

    void printAllBooks();

    void printFreeBookSpots();
};

Bookshelf::Bookshelf(int capacityRows, int capacityColumns) : capacityRows(capacityRows),
                                                              capacityColumns(capacityColumns) {
    books = (Book **) malloc(capacityRows * sizeof(Book *));
    for (int i = 0; i < capacityRows; i++) {
        books[i] = (Book *) malloc(capacityColumns * sizeof(Book));
    }
}

void Bookshelf::putBook(Book *book, int row, int column) {
    if (row >= capacityRows || column > capacityColumns || row < 0 || column < 0) {
        printf("\nCannot place book outside the bookshelf!\n");
    } else {
        Book bookAtPosition = books[row][column];
        if (bookAtPosition.exists) {
            printf("\nThere already is a book at row %d, column %d", row, column);
        } else {
            books[row][column] = *book;
        }
    }
}

void Bookshelf::printAllBooks() {
    for (int row = 0; row < capacityRows; row++) {
        for (int column = 0; column < capacityColumns; column++) {
            Book book = books[row][column];
            if (book.exists) {
                printf("\nBook at row %d, column %d", row, column);
                book.print();
            }
        }
    }
}

void Bookshelf::takeBook(int row, int column) {
    if (row >= capacityRows || column > capacityColumns || row < 0 || column < 0) {
        printf("\nCannot take a book outside the bookshelf!\n");
    } else {
        Book fromShelf = books[row][column];
        if (fromShelf.exists) {
            fromShelf.setExists(false);
            books[row][column] = fromShelf;
            printf("\nHere is your book:");
            fromShelf.print();
        } else {
            printf("\nThere is no book at row %d, column %d", row, column);
        }
    }
}

void Bookshelf::printFreeBookSpots() {
    printf("\nHere are the free book spots:\n");
    for (int row = 0; row < capacityRows; row++) {
        for (int column = 0; column < capacityColumns; column++) {
            Book book = books[row][column];
            if (!book.exists) {
                printf("Row %d, column %d\n", row, column);
            }
        }
    }
}


#endif //BOOKSHELF_BOOKSHELF_H
