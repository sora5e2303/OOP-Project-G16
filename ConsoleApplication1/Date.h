#include <iostream>
#include <string>
using namespace std;

class Date {
  private:
    int day;
    int month;
    int year;
  
  public:
    
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }
    
    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    
    // Member function to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    
    // Member function to print the date
    void printDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};