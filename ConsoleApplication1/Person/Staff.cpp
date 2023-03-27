#include "Staff.h"
Staff::Staff() : Person(){
    s_id = 0;
    s_jobT = " ";
}

Staff::Staff(int i, string s, string f, string l, string a,string p, string e){
    s_id = i;
    s_jobT = s;
    m_first = f;
    m_last = l;
    m_address = a;
    m_phone = p;
    m_email = e; 
}