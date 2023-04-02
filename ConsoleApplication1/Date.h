class Date {
private:
    int month, day, year;

public:
    Date(int m, int d, int y) {}

    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }
    void setYear(int y) { year = y; }
};