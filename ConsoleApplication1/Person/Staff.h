#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Staff
{
private:
    string s_id;
    string s_jobT;

public:
    Staff();
    Staff(int i, string s);

    string GetID() { return s_id; };
    string GetTitle() { return s_jobT; }

    void SetID(string s) { s_id = s; };
    void SetTitle(string t) { s_jobT = t; }

    bool InFile(const string& SD);
    void login();
};


