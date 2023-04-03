#include "Reservation.h"

class ReservationList : public Reservation{

public:
    void printRes(int id);
    string FindRes(const string& Res, int id);
};