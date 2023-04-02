#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person {

protected:
    string m_first;
    string m_last;
    string m_address;
    string m_phone;
    string m_email;
    int g_id;

public:

Person();
Person(string f, string l, string a,string p, string e );

string GetF(){return m_first;};
string GetL(){return m_last;};
string GetP(){return m_phone;};
string GetA(){return m_address;};
string GetE(){return m_email;};
int Getid(){return 100000 + (rand() % 900001);};

void SetFirst(string f){m_first = f;};
void SetLast(string l){m_last = l;};
void SetAdd(string a){m_address = a;};
void SetP(string p){m_phone = p;};
void SetE(string e){m_email = e;};
void Setid(){g_id = Getid();};
};