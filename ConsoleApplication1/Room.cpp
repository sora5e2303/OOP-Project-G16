#include "Room.h"
Room::Room() {
    m_roomnum = 0;
    m_roomcapacity = 0;
    m_price = 0;
}

Room::Room(int n, int c, int p){
    m_roomnum = n;
    m_roomcapacity = c;
    m_price = p;
}