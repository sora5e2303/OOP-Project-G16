#include "SingleRoom.h"

SingleRoom::SingleRoom(int roomNumber, int floor, int capacity, bool isAvailable, double basePrice)
    : Room(roomNumber, floor, capacity, isAvailable), basePrice(basePrice) {}

double SingleRoom::getBasePrice() {
    return basePrice;
}

double SingleRoom::calculatePrice() {
    return basePrice;
}
