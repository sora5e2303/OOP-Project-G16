//SingleRoom.h
#include <string>
#include <iostream>
#include "Room.h"
using namespace std;

class SingleRoom : public Room{
    private: 
        int m_maxcapguestone;

    public:
        SingleRoom() {
            m_maxcapguestone = 1;
        }

        SingleRoom(int o) {
            m_maxcapguestone = o;
        }

        int Getmaxcapguestone() {
            return m_maxcapguestone;
        }
        void Setmaxcapguestone(int o) {
            m_maxcapguestone = o;
        }

        void printmaxcapguestone() {
            cout << "The single room capacity is one guest" << Getmaxcapguestone() << endl;
        }
};


