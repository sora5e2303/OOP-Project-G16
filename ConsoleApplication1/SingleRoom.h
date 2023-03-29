#ifndef SINGLEROOM_H
#define SINGLEROOM_H

#include "Room.h"

using namespace std;

class SingleRoom : public Room {
    private:
        double basePrice;

    public:
        SingleRoom(int roomNumber, int floor, int capacity, bool isAvailable, double basePrice);
        double getBasePrice();
        double calculatePrice();
};

#endif
