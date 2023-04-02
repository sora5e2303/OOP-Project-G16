#include "Reservation.h"
Reservation::Reservation() {
	room = 0;
	startDate = " ";
	endDate = " ";
	reservationID = 0;
	RoomType = " ";
}

Reservation::Reservation(int r, string SD, string ED, int ID, string Type) {
	room = r;
	startDate = SD;
	endDate = ED;
	reservationID = ID;
	RoomType = Type;
}

void Reservation::CreateRes() {
	int option;

	ofstream writer;
	writer.open("Reservations.txt", ios::app);

	reservationID = 90000 + (rand() % 10001);
	cout << "Your Unique Reservation ID is: " << reservationID << endl;

	cin.ignore();
	cout << "Enter your start date (dd/mm/yyyy): ";
	getline(cin, startDate);

	cout << "Enter your end date (dd/mm/yyyy): ";
	getline(cin, endDate);

	cout << "What room type would you like?\n";
	cout << "1.Single\n2.Double\n3.Suite\n";
	cin >> option;
 
	switch (option) {
	case 1: RoomType = "Single Room";
		room = 100 + (rand() % 300);
		break;
	case 2: RoomType = "Double Room";
		room = 400 + (rand() % 300);
		break;
	case 3: RoomType = "Suite";
		room = 800 + (rand() % 100);
		break;
	default: "Please enter a valid option\n";
		cin >> option;
		break;
	};
	
	cout << "\n";
	writer << reservationID << "  " << startDate << " to " << endDate << "    Room#: " << room << "   " << RoomType << endl;
	cout << "Thank you for booking with us! See you soon!\n";
	cout << "No cancellations allowed\n";
	cout << "\n\n";
}

string Reservation::FindRes(const string& Res, int id) {
	ifstream file(Res);
	string line;
	int lineNum = 0;

	while (getline(file, line)) {
		lineNum++;
		int currentID = stoi(line);

		if (currentID == id) {
			return line;
		}
	}

	// ID not found in file
	return "No Reservation Found\n";
}

void Reservation::printRes(int id) {
	string line = FindRes("Reservations.txt", id);
	cout << line << "\n\n";
}
