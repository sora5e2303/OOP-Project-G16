#include "Reservation.h"

Reservation::Reservation() {}

Reservation::Reservation(Guest guest, Room room, Date startDate, Date endDate, int reservationID) {
    this->guest = guest;
    this->room = room;
    this->startDate = startDate;
    this->endDate = endDate;
    this->reservationID = reservationID;
}

Guest Reservation::getGuest() {
    return guest;
}

Room Reservation::getRoom() {
    return room;
}

Date Reservation::getStartDate() {
    return startDate;
}

Date Reservation::getEndDate() {
    return endDate;
}

int Reservation::getReservationID() {
    return reservationID;
}

int Reservation::getNumberOfDays() {
    return endDate.getJulianDate() - startDate.getJulianDate();
}

double Reservation::getTotalPrice() {
    int numberOfDays = getNumberOfDays();
    double roomPrice = room.getPrice();
    return numberOfDays * roomPrice;
}

void Reservation::setGuest(Guest guest) {
    this->guest = guest;
}

void Reservation::setRoom(Room room) {
    this->room = room;
}

void Reservation::setStartDate(Date startDate) {
    this->startDate = startDate;
}

void Reservation::setEndDate(Date endDate) {
    this->endDate = endDate;
}

void Reservation::setReservationID(int reservationID) {
    this->reservationID = reservationID;
}
