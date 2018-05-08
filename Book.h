//
// Created by Admin on 5/8/18.
//

#ifndef BOOKSHELF_BOOK_H
#define BOOKSHELF_BOOK_H

#include "IntegerUtils.h"

const int ADDITIONAL_TEXT_SIZE = 27;

class Book {
public:
    char *title;
    char *author;
    char *text;
    int year;

    Book(char *title, char *author, int year, char *text);

    void print();
};

Book::Book(char *title, char *author, int year, char *text) {
    this->title = title;
    this->author = author;
    this->year = year;
    this->text = text;
}

void Book::print() {
    printf("Title:%s\nAuthor:%s\nYear:%d\nText:%s\n", title, author, year, text);
}


#endif //BOOKSHELF_BOOK_H
