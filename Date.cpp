#include "Date.h"
#include<iostream>
#include<cstring>
using namespace std;
Date::Date() {

}
Date::~Date() {

}
  
Date::Date(string day, string month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::setDay(string day) {
	this->day = day;
}void Date::setMonth(string month) {
	this->month = month;
}void Date::setYear(int year) {
	this->year = year;
}
string Date::getDay() {
	return day;
}
string Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}