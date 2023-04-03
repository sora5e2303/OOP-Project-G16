#include "ReservationList.h"

string ReservationList::FindRes(const string& Res, int id) {
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

void ReservationList::printRes(int id) {
	string line = FindRes("Reservations.txt", id);
	cout << line << "\n\n";
}