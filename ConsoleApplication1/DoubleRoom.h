#ifndef DOUBLEROOM_H
#define DOUBLEROOM_H

#include "Room.h"

class DoubleRoom : public Room {
    private:
        const static double BASE_PRICE;
        const static double EXTRA_PERSON_PRICE;

        int numOccupants;

    public:
        DoubleRoom(int roomNumber, int floor, int capacity, bool isAvailable, int numOccupants);
        int getNumOccupants();
        double calculatePrice();
};

#endif
