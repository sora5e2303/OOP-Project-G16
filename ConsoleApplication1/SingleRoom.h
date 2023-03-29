#include <string>
#include <iostream>

class SingleRoom: public Room;
class SingleRoom {
    private: 
    int m_maxcapguestone;

    public:
SingleRoom();
//Parameterized Constructor
SingleRoom (int o) {

    m_maxcapguestone = o
}

//Getters and Setters
int Getmaxcapguestone() = {return m_maxcapguestone;}; 
void Setmaxcapguestone(int o) {o = m_maxcapguestone;}; 
 void printmaxcapguestone() {
    cout << "The single room capacity is one guest" << Getmaxcapguestone() << endl;
 }
}

