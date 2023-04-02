#include "Staff.h"
Staff::Staff() : Person(){
    s_id = 0;
    s_jobT = " ";
}

Staff::Staff(int i, string s){
    s_id = i;
    s_jobT = s;
    
}

bool InFile(const string& SD, const string& ID){
    
    ifstream file(SD);
    string line;

    while (getline(file, line)) {
        if (line.find(ID) != string::npos) {
            return true;
        }
    }

    return false;
}