#include "Person.h"
#include <iostream>

class Guest : public Person{

private:
    int g_id;

public:
    Guest() : Person();
    Guest(int i, string f, string l, string a, string p, string e);

    int Getid(){return 100000 + (rand() % 900001);};

    void Setid(){g_id = Getid();};
}