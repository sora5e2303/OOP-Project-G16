class Room : public Person;
class Room {

private:
 int m_roomnum;
 int m_roomcapacity;
 int price;

public:

Room();
//Parameterized Constructor
Room ( int n, int c, int p) {
    m_roomnum = n;
    m_roomcapacity = c;
    m_price = p;
}

//Getters and Setters
int Getroomnum()= { return m_roomnum;};
int Getroomcapacity()= {return m_roomcapacity;};
int Getprice()= {return m_price;};
void Setroomnum(int n) {n = m_roomnum;};
void Setroomcapacity(int c) {n = m_roomcapacity;};
void Setprice(int p) {p = m_price;};

virtual void print(){
    cout << "Room Number: "<< Getroomnum() << endl;
    cout << "Room Capacity: " << Getroomcapacity()<< endl;
    cout << "Price: " << Getprice()<< endl;}
}

