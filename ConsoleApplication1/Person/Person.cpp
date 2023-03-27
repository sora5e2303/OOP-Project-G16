#include "Person.h"

Person::Person(){
    m_first = " ";
    m_last = " ";
    m_address = " ";
    m_phone = " ";
    m_email = " "; 
}

Person::Person(string f, string l, string a, string p, string e){
    m_first = f;
    m_last = l;
    m_address = a;
    m_phone = p;
    m_email = e; 
}