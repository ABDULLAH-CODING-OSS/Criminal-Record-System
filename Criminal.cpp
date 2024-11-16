#include "Criminal.h"
#include "Date.h"
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
Criminal::Criminal(){}
Criminal::Criminal(string name, int age, string race, char gender, string cnic, string state, string city, int postalCode, string address, int cellNumber, string crimeType, string offence, string complainerName, string investingOfficer, Date dob, Date crimeDate, Date punishmentDate) {

	this->name = name;
	this->age = age;
	this->race = race;
	this->gender = gender;
	this->cnic = cnic;
	this->state = state;
	this->city = city;
	this->postalCode = postalCode;
	this->address = address;
	this->cellNumber = cellNumber;
	this->crimeType = crimeType;
	this->offence = offence;
	this->dob = dob;
	this->crimeDate = crimeDate;
	this->punishmentDate = punishmentDate;
	this->complainerName = complainerName;
	this->investingOfficer = investingOfficer;
}
//bool Criminal::operator==(const string& otherName) const {
//	return name == otherName; 
//}
void Criminal::setName(string name) {
	this->name = name;
}
string Criminal::getName() {
	return name;
}void Criminal::setAge(int age) {
	this->age = age;
}
int Criminal::getAge() {
	return age;
}void Criminal::setRace(string race) {
	this->race = race;
}
string  Criminal::getRace() {
	return race;
}void Criminal::setGender(char gender) {
	this->gender = gender;
}
char Criminal::getGender() {
	return gender;
}void Criminal::setCnic(string cnic) {
	this->cnic = cnic;
}
string Criminal::getCnic() {
	return cnic;
}void Criminal::setState(string state) {
	this->state = state;
}
string Criminal::getState() {
	return state;
}void Criminal::setCity(string city) {
	this->city = city;
}
string Criminal::getCity() {
	return city;
}void Criminal::setPostalCode(int postalCode) {
	this->postalCode = postalCode;
}
int Criminal::getpostalCode() {
	return postalCode;
}void Criminal::setAddress(string address) {
	this->address = address;
}
string Criminal::getAddress() {
	return address;
}void Criminal::setCellNumber(int cellNumber) {
	this->cellNumber = cellNumber;
}
int Criminal::getCellNumber() {
	return cellNumber;
}void Criminal::setcrimeType(string crimeType) {
	this->crimeType = crimeType;
}
string Criminal::getcrimeType() {
	return crimeType;
}void Criminal::setoffenc(string offence) {
	this->offence = offence;
}
string Criminal::getoffence() {
	return offence;
}

void Criminal::setcomplainerName(string complainerName) {
	this->complainerName = complainerName;
}
string Criminal::getcomplainerName() {
	return complainerName;
}void Criminal::setInvestingOfficer(string investingOfficer) {
	this->investingOfficer = investingOfficer;
}
string Criminal::getinvestingOfficer() {
	return investingOfficer;
}


