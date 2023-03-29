#include <iostream>
#include <string>
#include "Hotel.h"

using namespace std;

int main() {
    Hotel hotel("Hilton", "123 Main St", "New York", "NY", "10001");

    while (true) {
        int choice;
        cout << "Welcome to " << hotel.getName() << " hotel!" << endl;
        cout << "Please choose an option: " << endl;
        cout << "1. Display available rooms" << endl;
        cout << "2. Reserve a room" << endl;
        cout << "3. Cancel a reservation" << endl;
        cout << "4. Display reservations" << endl;
        cout << "5. Exit" << endl;

        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                hotel.displayAvailableRooms();
                break;
            case 2:
                hotel.makeReservation();
                break;
            case 3:
                hotel.cancelReservation();
                break;
            case 4:
                hotel.displayReservations();
                break;
            case 5:
                cout << "Thank you for using " << hotel.getName() << " hotel management system!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
