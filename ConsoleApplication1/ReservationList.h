#ifndef RESERVATION_LIST_H
#define RESERVATION_LIST_H

#include <vector>
#include "Reservation.h"

using namespace std;

class ReservationList {
    private:
        vector<Reservation> reservations;
        int nextReservationID;

    public:
        ReservationList();
        void addReservation(Reservation reservation);
        bool removeReservation(int reservationID);
        vector<Reservation> getReservations();
        Reservation getReservationByID(int reservationID);
        int getNextReservationID();
};

#endif
