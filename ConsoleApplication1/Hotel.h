#include <iostream>
#include <string>
using namespace std;

class Hotel {
  private:
    string name;
    int numRooms;
    int numStaffMembers;

  public:
    // Constructor
    Hotel(string hotelName, int NumR, int NumS) {
        name = hotelName;
        numRooms = NumR;
        numStaffMembers = NumS;
    }

    // Getter methods
    string getName() const {
        return name;
    }

    int getNumRooms() const {
        return numRooms;
    }

    int getNumStaffMembers() const {
        return numStaffMembers;
    }

    // Setter methods
    void setName(string hotelName) {
        name = hotelName;
    }

    void setNumRooms(int NumR) {
        numRooms = NumR;
    }

    void setNumStaffMembers(int NumR) {
        numStaffMembers = NumS;
    }
};