#include "Suite.h"

const double Suite::BasePrice = 200.0;
const double Suite::ExtraBedPrice = 50.0;

Suite::Suite(int Rnum, int f, int cap, bool Ava, bool Xbed){
    roomNumber = Rnum;
    floor = f;
    capacity = cap;
    isAvailable = Ava;
    hasExtraBed = Xbed;
}

bool Suite::getHasExtraBed() {
    return hasExtraBed;
}

double Suite::calculatePrice() {
    double price = BasePrice;
    if (hasExtraBed) {
        price += ExtraBedPrice;
    }
    return price;
}
