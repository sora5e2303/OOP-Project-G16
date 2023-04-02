#include "Room.h"

Room::Room(int roomNumber, int floor, int capacity, bool isAvailable) {
    int roomNumber = roomNumber;
    int floor = floor;
    int capacity = capacity;
    bool isAvailable = isAvailable;
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

void Room::setIsAvailable(bool isAvailable) {
    isAvailable = isAvailable;
}

