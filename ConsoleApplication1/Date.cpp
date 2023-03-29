#include "Date.h"

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::setDate(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

bool Date::operator<(const Date& other) const {
    if (year < other.year) {
        return true;
    } else if (year == other.year && month < other.month) {
        return true;
    } else if (year == other.year && month == other.month && day < other.day) {
        return true;
    }
    return false;
}
