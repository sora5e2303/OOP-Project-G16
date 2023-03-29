#include <iostream>
#include <string>

#include "Guest.h"
#include "Room.h"
#include "Date.h"

using namespace std;

class Reservation
//Class Structure
    private:
        Guest guest;
        Room room;
        Date startDate;
        Date endDate;
        int reservationID;

    public:
        Reservation();
//Overloaded Constructor
        Reservation(Guest guest, Room room, Date startDate, Date endDate, int reservationID);

// Getters and Setters
        Guest getGuest();
        Room getRoom();
        Date getStartDate();
        Date getEndDate();
        int getReservationID();
        int getNumberOfDays();
        double getTotalPrice();

        void setGuest(Guest guest);
        void setRoom(Room room);
        void setStartDate(Date startDate);
        void setEndDate(Date endDate);
        void setReservationID(int reservationID);
};


