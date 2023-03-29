#include <iostream>
#include <string>

#include <string>
#include <vector>
#include "Reservation.h"

using namespace std;

class FileHandler {
public:
    static vector<string> readFromFile(string fileName);
    static void writeToFile(string fileName, vector<string> data);
    static vector<Reservation> readReservationData(string fileName);
    static void writeReservationData(string fileName, vector<Reservation> reservations);
};

#endif
