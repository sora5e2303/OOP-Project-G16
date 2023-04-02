#include <iostream>
#include <string>

#include <iostream>

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
        int getFloor();
        int getCapacity();
        bool getIsAvailable();
        void setIsAvailable(bool isAvailable);
        virtual double calculatePrice() = 0;
};


