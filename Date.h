#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<cstring>
using namespace std;


class Date
{
private:
	string day;
	string month;
	int year;
public:
	Date();
	~Date();
	
	Date(string day, string month, int year);
	void setDay(string day);
	void setMonth(string month);
	void setYear(int year);
	string getDay();
	string getMonth();
	int getYear();
};
#endif // !DATE_H
