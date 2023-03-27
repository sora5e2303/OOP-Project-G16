class Hotel {
  private:
    std::string name;
    int numRooms;
    int numStaffMembers;

  public:
    // Constructor
    Hotel(std::string hotelName, int numRooms, int numStaffMembers) {
        name = hotelName;
        this->numRooms = numRooms;
        this->numStaffMembers = numStaffMembers;
    }

    // Getter methods
    std::string getName() const {
        return name;
    }

    int getNumRooms() const {
        return numRooms;
    }

    int getNumStaffMembers() const {
        return numStaffMembers;
    }

    // Setter methods
    void setName(std::string hotelName) {
        name = hotelName;
    }

    void setNumRooms(int numRooms) {
        this->numRooms = numRooms;
    }

    void setNumStaffMembers(int numStaffMembers) {
        this->numStaffMembers = numStaffMembers;
    }
};