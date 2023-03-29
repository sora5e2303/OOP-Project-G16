#include <iostream>
#include <string>
#include <vector>
#include "Room.h"

using namespace std;

class Hotel {
private:
    string name;
    string address;
    string city;
    string state;
    string zipCode;
    vector<Room*> rooms;

public:
    // Constructor
    Hotel(string n, string a, string c, string s, string z) {
        name = n;
        address = a;
        city = c;
        state = s;
        zipCode = z;
    }

    // Getters and Setters
    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getAddress() const {
        return address;
    }

    void setAddress(string address) {
        this->address = address;
    }

    string getCity() const {
        return city;
    }

    void setCity(string city) {
        this->city = city;
    }

    string getState() const {
        return state;
    }

    void setState(string state) {
        this->state = state;
    }

    string getZipCode() const {
        return zipCode;
    }

    void setZipCode(string zipCode) {
        this->zipCode = zipCode;
    }

    // Room Management
    void addRoom(Room* room) {
        rooms.push_back(room);
    }

    Room* getRoom(int roomNumber) const {
        for (int i = 0; i < rooms.size(); i++) {
            if (rooms[i]->getRoomNumber() == roomNumber) {
                return rooms[i];
            }
        }
        return NULL;
    }

    vector<Room*> getRooms() const {
        return rooms;
    }

    // Display Hotel Information
    void display() const {
        cout << "Hotel Name: " << name << endl;
        cout << "Address: " << address << ", " << city << ", " << state << " " << zipCode << endl;
        cout << "Rooms: " << endl;
        for (int i = 0; i < rooms.size(); i++) {
            rooms[i]->display();
        }
    }

    // Destructor
    ~Hotel() {
        for (int i = 0; i < rooms.size(); i++) {
            delete rooms[i];
        }
    }
};
