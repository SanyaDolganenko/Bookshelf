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

    //Book(char *title, char *author, int year, char *text);
    Book(char *title, char *author, char *text, int year);

    void print();
};



void Book::print() {
    printf("Title:%s\nAuthor:%s\nYear:%d\nText:%s\n", title, author, year, text);
}

Book::Book(char *title, char *author, char *text, int year) : title(title), author(author), text(text), year(year) {}


#endif //BOOKSHELF_BOOK_H
