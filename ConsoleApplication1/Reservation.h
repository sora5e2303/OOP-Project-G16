#include <iostream>
#include <string>

#include "Guest.h"
#include "Room.h"
#include "Date.h"

using namespace std;

class Reservation {
    private:
        Guest guest;
        Room room;
        Date startDate;
        Date endDate;
        int reservationID;

    public:
        Reservation();
        Reservation(Guest guest, Room room, Date startDate, Date endDate, int reservationID);

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

#endif
