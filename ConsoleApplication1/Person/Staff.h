#include "Person.h"

class Staff : public Person{

private:
    int s_id;
    string s_jobT;

public:
    Staff() : Person();
    Staff(int i, string s, string f, string l, string a,string p, string e);

    int GetID(){return s_id;};
    string GetTitle(){return s_jobT;}

    void SetID(int s){s_id = s;};
    void SetTitle(string t){s_jobT = t;}
}