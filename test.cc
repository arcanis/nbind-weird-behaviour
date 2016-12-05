#include <cstdio>

struct Point {

    unsigned row;
    unsigned column;

    Point(void) : row(0), column(0) {
    }

    Point(unsigned initial_row, unsigned initial_column) : row(initial_row), column(initial_column) {
    }

    unsigned getRow(void) const {
        return row;
    }

    unsigned getColumn(void) const {
        return column;
    }

};

unsigned test(Point point) {

    printf("row %d\n", point.row);
    printf("column %d\n", point.column);

}

#include "nbind/nbind.h"

NBIND_CLASS(Point) {

    construct<>();
    construct<unsigned, unsigned>();

    getter(getRow);
    getter(getColumn);

}

NBIND_GLOBAL() {

    function(test);

}
