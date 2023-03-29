#ifndef SUITE_H
#define SUITE_H

#include "Room.h"

class Suite : public Room {
    private:
        const static double BASE_PRICE;
        const static double EXTRA_BED_PRICE;

        bool hasExtraBed;

    public:
        Suite(int roomNumber, int floor, int capacity, bool isAvailable, bool hasExtraBed);
        bool getHasExtraBed();
        double calculatePrice();
};

#endif
