#ifndef ROOM_H
#define ROOM_H

#include <iostream>

using namespace std;

class Room {
    private:
        int roomNumber;
        int floor;
        int capacity;
        bool isAvailable;

    public:
        Room(int roomNumber, int floor, int capacity, bool isAvailable);
        int getRoomNumber();
        int getFloor();
        int getCapacity();
        bool getIsAvailable();
        void setIsAvailable(bool isAvailable);
        virtual double calculatePrice() = 0;
};

#endif


