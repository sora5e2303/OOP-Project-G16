#include "Date.h"

Date::Date() {
    day = 1;
    month = 1;
    year = 2002;
}

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}