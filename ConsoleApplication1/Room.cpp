#include "Room.h"

Room::Room(int roomNumber, int floor, int capacity, bool isAvailable)
    : roomNumber(roomNumber), floor(floor), capacity(capacity), isAvailable(isAvailable) {}

int Room::getRoomNumber() {
    return roomNumber;
}

int Room::getFloor() {
    return floor;
}

int Room::getCapacity() {
    return capacity;
}

bool Room::getIsAvailable() {
    return isAvailable;
}

void Room::setIsAvailable(bool isAvailable) {
    this->isAvailable = isAvailable;
}
