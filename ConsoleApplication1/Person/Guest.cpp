#include "Guest.h"

Guest::Guest() : Person(){
    g_id = 0;
    m_first = " ";
    m_last = " ";
    m_address = " ";
    m_phone = " ";
    m_email = " "; 
}

Guest::Guest(int i, string f, string l, string a, string p, string e){
    g_id = i;
    m_first = f;
    m_last = l;
    m_address = a;
    m_phone = p;
    m_email = e; 
}