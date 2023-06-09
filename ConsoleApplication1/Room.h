//Room.h
#include <iostream>
#include <string>

using namespace std;

class Room {
    protected:
        int roomNumber;
        int floor;
        int capacity;
        bool isAvailable;

    public:
        Room(int roomNumber, int floor, int capacity, bool isAvailable);
        int getRoomNumber();
        int getCapacity();
        bool getIsAvailable();
        void setIsAvailable(bool isAvailable);
        virtual double calculatePrice() = 0;
};


