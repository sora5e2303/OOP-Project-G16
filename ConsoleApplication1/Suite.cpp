#include "Suite.h"

const double Suite::BASE_PRICE = 200.0;
const double Suite::EXTRA_BED_PRICE = 50.0;

Suite::Suite(int roomNumber, int floor, int capacity, bool isAvailable, bool hasExtraBed)
    : Room(roomNumber, floor, capacity, isAvailable), hasExtraBed(hasExtraBed) {}

bool Suite::getHasExtraBed() {
    return hasExtraBed;
}

double Suite::calculatePrice() {
    double price = BASE_PRICE;
    if (hasExtraBed) {
        price += EXTRA_BED_PRICE;
    }
    return price;
}
