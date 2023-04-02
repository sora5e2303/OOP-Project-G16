#include "DoubleRoom.h"

const double DoubleRoom::BASE_PRICE = 100.0;
const double DoubleRoom::EXTRA_PERSON_PRICE = 20.0;

DoubleRoom::DoubleRoom(int roomNumber, int floor, int capacity, bool isAvailable, int numOccupants)
{
    int roomNumber = roomNumber;
    int floor = floor;
    int capacity = capacity;
    bool isAvailable = isAvailable;
    int numOccupants = numOccupants;
}

int DoubleRoom::getNumOccupants()
{
    return numOccupants;
}

double DoubleRoom::calculatePrice()
{
    double price = BASE_PRICE;
    if (numOccupants > 2)
    {
        price += (numOccupants - 2) * EXTRA_PERSON_PRICE;
    }
    return price;
}

