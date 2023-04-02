#include "Room.h"

Room::Room(int Rnum, int f, int cap, bool isAva) {
    int roomNumber = Rnum;
    int floor = f;
    int capacity = cap;
    bool isAvailable = isAva;
}

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

void Room::setIsAvailable(bool isAva) {
    isAvailable = isAva;
}

