#include "FileHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "Reservation.h"

using namespace std;

// Reads a file and returns a vector of strings, where each element is a line in the file
vector<string> FileHandler::readFromFile(string fileName) {
    vector<string> data;
    ifstream inFile(fileName);

    if (!inFile) {
        cout << "Error: Could not open file " << fileName << endl;
    } else {
        string line;
        while (getline(inFile, line)) {
            data.push_back(line);
        }
        inFile.close();
    }

    return data;
}

// Writes a vector of strings to a file, where each element is written as a line in the file
void FileHandler::writeToFile(string fileName, vector<string> data) {
    ofstream outFile(fileName);

    if (!outFile) {
        cout << "Error: Could not open file " << fileName << endl;
    } else {
        for (int i = 0; i < data.size(); i++) {
            outFile << data[i] << endl;
        }
        outFile.close();
    }
}

// Reads reservation data from a file and returns a vector of Reservation objects
vector<Reservation> FileHandler::readReservationData(string fileName) {
    vector<string> data = readFromFile(fileName);
    vector<Reservation> reservations;

    for (int i = 0; i < data.size(); i++) {
        stringstream ss(data[i]);

        // Parse the data from the file
        string guestName, guestAddress, guestPhoneNumber, guestEmailAddress, roomNumberStr, capacityStr, priceStr, startMonthStr, startDayStr, startYearStr, endMonthStr, endDayStr, endYearStr;
        int guestID, roomNumber, capacity, price, startMonth, startDay, startYear, endMonth, endDay, endYear;

        ss >> guestID >> guestName >> guestAddress >> guestPhoneNumber >> guestEmailAddress >> roomNumberStr >> capacityStr >> priceStr >> startMonthStr >> startDayStr >> startYearStr >> endMonthStr >> endDayStr >> endYearStr;
        roomNumber = stoi(roomNumberStr);
        capacity = stoi(capacityStr);
        price = stoi(priceStr);
        startMonth = stoi(startMonthStr);
        startDay = stoi(startDayStr);
        startYear = stoi(startYearStr);
        endMonth = stoi(endMonthStr);
        endDay = stoi(endDayStr);
        endYear = stoi(endYearStr);

        // Create a new Reservation object from the data and add it to the vector
        Guest guest(guestID, guestName, guestAddress, guestPhoneNumber, guestEmailAddress);
        Room room(roomNumber, capacity, price);
        Date startDate(startMonth, startDay, startYear);
        Date endDate(endMonth, endDay, endYear);
        Reservation reservation(guest, room, startDate, endDate);
        reservations.push_back(reservation);
    }

    return reservations;
}

// Writes reservation data to a file
void FileHandler::writeReservationData(string fileName, vector<Reservation> reservations) {
    vector<string> data;

    for (int i = 0; i < reservations.size(); i++) {
        // Convert the data to a string and add it to the vector
        Guest guest = reservations[i].getGuest();
        Room room = reservations[i].getRoom();
        Date startDate = reservations[i].getStartDate();
        Date endDate = reservations[i].getEndDate();

        string line = to_string(guest.getID()) + " " + guest.getName() + " " + guest.getAddress() + " " + guest.getPhoneNumber() + " " + guest.getEmailAddress() + " " + to_string(room.getRoomNumber()) + " " + to_string(room.getCapacity()) + " " + to_string(room.getPrice()) + " " + to_string(startDate.getMonth()) + " " + to_string(startDate.getDay()) + " " + to_string(startDate.getYear()) + " " + to_string(endDate.getMonth()) + " " + to_string(endDate.getDay()) + " " + to_string(endDate.getYear());
        data.push_back(line);
    }

    writeToFile(fileName, data);
}

