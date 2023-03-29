#include "ReservationList.h"

ReservationList::ReservationList() {
    nextReservationID = 1;
}

void ReservationList::addReservation(Reservation reservation) {
    reservation.setReservationID(nextReservationID);
    reservations.push_back(reservation);
    nextReservationID++;
}

bool ReservationList::removeReservation(int reservationID) {
    for (vector<Reservation>::iterator it = reservations.begin(); it != reservations.end(); ++it) {
        if (it->getReservationID() == reservationID) {
            reservations.erase(it);
            return true;
        }
    }
    return false;
}

vector<Reservation> ReservationList::getReservations() {
    return reservations;
}

Reservation ReservationList::getReservationByID(int reservationID) {
    for (vector<Reservation>::iterator it = reservations.begin(); it != reservations.end(); ++it) {
        if (it->getReservationID() == reservationID) {
            return *it;
        }
    }
    return Reservation();
}

int ReservationList::getNextReservationID() {
    return nextReservationID;
}
