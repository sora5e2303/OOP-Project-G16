#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Guest {

protected:
    string m_first;
    string m_last;
    string m_address;
    int m_phone;
    string m_email;
    int g_id;

public:

    Guest();
    Guest(int i, string f, string l, string a, int p, string e);

    string GetF() { return m_first; };
    string GetL() { return m_last; };
    int GetP() { return m_phone; };
    string GetA() { return m_address; };
    string GetE() { return m_email; };
    int Getid() { return 100000 + (rand() % 900001); };

    void SetFirst(string f) { m_first = f; };
    void SetLast(string l) { m_last = l; };
    void SetAdd(string a) { m_address = a; };
    void SetP(int p) { m_phone = p; };
    void SetE(string e) { m_email = e; };
    void Setid(int i) { g_id = i; };

    void WriteToFile();
    bool InFile(const string& GD);
    void Print();
};