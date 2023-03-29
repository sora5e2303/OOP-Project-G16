//Makayla
#include <iostream>
#include <string>
#include "Guest.h"
#include "Room.h"
#include "Date.h"

using namespace std;

class Reservation {
//Class Structure
    private:
        string guest;
        string room;
        int startDate;
        int endDate;
        int reservationID;

    public:
        Reservation();
//Overloaded Constructor
        Reservation(string guest, string room, int startDate, int endDate, int reservationID);

// Getters to return required values
        string getguest() {return guest;};
        string getroom(){return room;};
        int getstartDate(){return startDate;};
        int getendDate(){return endDate;};
        int getreservationID(){return reservationID};
//Setters to assign letters to variables
        void setguest(string g) {g = guest;};
        void setroom(string r){r= room;};
        void setstartDate(int s){s= startDate;};
        void setendDate(int e){e = endDate;};
        void setreservationID(int i){i = reservationID};
//Virtual void to print variables when code is run
        virtual void print () {
            cout << "Guest Name: " getguest()<< endl;
            cout << "Room Number: " getroom()<< endl;
            cout << "Start Date: " getstartDate()<<endl;
            cout << " End Date: " getendDate() << endl;
            cout << " Reservation ID: " getreservationID() << endl;
        }
};


