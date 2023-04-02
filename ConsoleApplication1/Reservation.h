#pragma once
#include "Guest.h"

class Reservation : public Guest{
    //Class Structure
private:
    int room;
    string startDate;
    string endDate;
    int reservationID;
    string RoomType;

public:
    Reservation();
    //Overloaded Constructor
    Reservation( int r, string SD, string ED, int ID, string Type);

    // Getters to return required values
    int getroom() { return room; };
    string getstartDate() { return startDate; };
    string getendDate() { return endDate; };
    int getreservationID() { return reservationID; };
    string GetType() { return RoomType; };

    //Setters to assign letters to variables
    void setroom(int r) { room = r; };
    void setstartDate(string s) { startDate = s; };
    void setendDate(string e) { endDate = e; };
    void setreservationID(int i) { reservationID = i; };
    void SetRoomType(string t) { RoomType = t; };

    //void to print variables when code is run
    void printRes(int id);

    void CreateRes();
    string FindRes(const string& Res, int id);
};

