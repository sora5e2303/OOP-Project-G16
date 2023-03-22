#include "Person.h"
#include <iostream>

class Guest : public Person{

private:
    int g_id;

public:
    Guest() : Person();
    Guest(int i, string f, string l, string a, string p, string e);

    int Getid(){return g_id;};

    void Setid(){g_id = 100000 + (rand() % 900001);};


}