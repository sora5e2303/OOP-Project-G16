#include "Guest.h"

Guest::Guest() {
    g_id = 0;
    m_first = " ";
    m_last = " ";
    m_address = " ";
    m_phone = 0;
    m_email = " ";
}

Guest::Guest(int i, string f, string l, string a, int p, string e) {
    g_id = i;
    m_first = f;
    m_last = l;
    m_address = a;
    m_phone = p;
    m_email = e;
}
void Guest::WriteToFile() {

    ofstream Writer;
    Writer.open("GuestData.txt", ios::app);

    Writer << g_id << "   " << m_first << "   " << m_last << "   " << m_address << "   " << m_phone << "   " << m_email << endl;
    
}

bool Guest::InFile(const string& GD) {

    ifstream file(GD);
    int num;
    while (file >> num) {
        if (num == g_id) {
            return true;
        }
    }
    return false;
}

void Guest::Print() {

    while (!InFile("GuestData.txt")) {
        cin.ignore();
        cout << "Please enter a valid ID: ";
        cin >> g_id;
    }
    if (InFile("GuestData.txt")) {
        cout << "Welcome back!\n\n";
    }

}