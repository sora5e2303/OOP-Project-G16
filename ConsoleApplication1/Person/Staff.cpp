#include "Staff.h"

Staff::Staff() {
    s_id = " ";
    s_jobT = " ";
}

Staff::Staff(int i, string s) {
    s_id = i;
    s_jobT = s;

}

bool Staff::InFile(const string& SD) {

    ifstream file(SD);
    string line;

    while (getline(file, line)) {
        if (line.find(s_id) != string::npos) {
            return true;
        }
    }

    return false;
}

void Staff::login() {
    
    while (!InFile("Staffdata.txt")) {
        cout << "Please enter a valid ID: ";
        cin >> s_id;
    }
    if (InFile("Staffdata.txt")) {
        cout << "Welcome back!\n\n";
    }
    
}