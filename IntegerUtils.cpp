//
// Created by Admin on 5/8/18.
//

#include "IntegerUtils.h"

char *IntegerUtils::integerToString(int i, char b[]) {
    char const digit[] = "0123456789";
    char *p = b;
    if (i < 0) {
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    do { //Move to where representation ends
        ++p;
        shifter = shifter / 10;
    } while (shifter);
    *p = '\0';
    do { //Move back, inserting digits as u go
        *--p = digit[i % 10];
        i = i / 10;
    } while (i);
    return b;
}

IntegerUtils::IntegerUtils() {

}

