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
        string startDate;
        string endDate;
        int reservationID;

    public:
        Reservation();
//Overloaded Constructor
        Reservation(string guest, string room, int startDate, int endDate, int reservationID);

// Getters to return required values
        string getguest() {return guest;};
        string getroom(){return room;};
        string getstartDate(){return startDate;};
        string getendDate(){return endDate;};
        int getreservationID(){return reservationID};

//Setters to assign letters to variables
        void setguest(string g) {guest = g;};
        void setroom(string r){room = r;};
        void setstartDate(string s){startDate = s;};
        void setendDate(string e){endDate = e;};
        void setreservationID(int i){reservationID = i};

//Virtual void to print variables when code is run
        virtual void print () {
            cout << "Guest Name: " getguest()<< endl;
            cout << "Room Number: " getroom()<< endl;
            cout << "Start Date: " getstartDate()<<endl;
            cout << "End Date: " getendDate() << endl;
            cout << "Reservation ID: " getreservationID() << endl;
        }
};


