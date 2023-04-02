#include <iostream>
#include <string>

#include "Room.h"

class Suite : public Room {

    private:
        const static double BasePrice;
        const static double ExtraBedPrice;

        bool hasExtraBed;

    public:
        Suite(int roomNumber, int floor, int capacity, bool isAvailable, bool hasExtraBed);
        bool getHasExtraBed();
        double calculatePrice();
};


