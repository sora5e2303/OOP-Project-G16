#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Staff.h"
#include "Guest.h"
#include "Reservation.h"

using namespace std;

int main() {

    int option;
    cout << "\n\n";
    do {  

        cout << "HOTEL MANAGEMENT SYSTEM\n\n";
        cout << "*************************************\n\n";
        cout << "1.Staff\n";
        cout << "2.Create Guest Account\n";
        cout << "3.Login Guest Account\n";
        cout << "4.Exit\n";

        cin >> option;

        cout << "*************************************\n";

        srand(time(0));

        if (option == 1) {
            Staff S;
            string loginID;
            fstream Staffdata;
            Staffdata.open("StaffData.txt");

            cout << "Please enter your ID: ";
            cin >> loginID;

            S.SetID(loginID);
            S.login();
            Staffdata.close();
        }
        else if (option == 2) {

            Guest G;
            string f;
            string l;
            string a;
            string e;
            int p;

            int id = G.Getid();

            cout << "Please enter your information: \n";
            cout << "First Name: ";
            cin >> f;
            G.SetFirst(f);

            cout << "Last Name: ";
            cin >> l;
            G.SetLast(l);

            cin.ignore();
            cout << "Address: ";
            getline(cin, a);
            G.SetAdd(a);

            cout << "Email Address: ";
            cin >> e;
            G.SetE(e);

            cout << "Phone Number: ";
            cin >> p;
            G.SetP(p);

            cout << "Your unique Guest ID is: " << id << endl;
            G.Setid(id);

            G.WriteToFile();
        }
        else if (option == 3) {
            Reservation R;
            Guest G;
            int id;
            string RoomType;
            fstream GuestData;
            GuestData.open("GuestData.txt");

            cout << "Please enter your unique ID: ";
            cin >> id;

            G.Setid(id);
            G.login();

            cout << "What would you like to do?\n";
            cout << "1.Make a Reservation\n";
            cout << "2.Find Reservation\n";
            cin >> option;

            switch (option) {
            case 1: R.CreateRes();
                break;
            case 2: cout << "Please enter your unique reservation ID: ";
                cin >> id;
                R.printRes(id);
            }
          
        }
    } while (option != 4);
}