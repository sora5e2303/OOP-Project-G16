#include "Reservation.h"
//Assingned values to variables
Reservation::Reservation() {}
{
guest = " ";
room = " ";
startDate = 0;
endDate = 0;
reservationID= 0;
}

//Defining variables
Reservation::Reservation(string g, string r, int s, int e, int i){
    guest = g;
    room = r;
    startDate = s;
    endDate = e;
}reservationID = i; 
