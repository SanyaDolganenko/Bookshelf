//
// Created by Admin on 5/8/18.
//

#ifndef BOOKSHELF_BOOK_H
#define BOOKSHELF_BOOK_H

#include <cstdio>

const int ADDITIONAL_TEXT_SIZE = 27;

class Book {
public:
    char *title;
    char *author;
    char *text;
    int year;
    bool exists;

    //Book(char *title, char *author, int year, char *text);
    Book(char *title, char *author, char *text, int year);

    void print();

    void setExists(bool exists);
};


void Book::print() {
    printf("\nTitle:%s\nAuthor:%s\nYear:%d\nText:%s\n", title, author, year, text);
    printf("______________________");
}

Book::Book(char *title, char *author, char *text, int year) : title(title), author(author), text(text), year(year) {
    exists = true;
}

void Book::setExists(bool exists) {
    this->exists = exists;
}


#endif //BOOKSHELF_BOOK_H
