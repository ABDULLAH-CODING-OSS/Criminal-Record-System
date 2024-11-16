#ifndef CRIMINALS_H
#define CRIMINALS_H
#include"Criminal.h"
#include<string>
#include<iostream>
using namespace std;
class Criminals
{
private:
	Criminal* arr;
	int maxSize;
	int currSize;
public:
	Criminals(int maxSize);
	~Criminals();
	void insertCriminal();
	void sortingName();
	void binarySearch(string name);
	void binarySearchCrimeType(string crime);
	void updateCriminal(string name);
	void theftSearch(string theft);
	void murderSearch(string murder);
	void removeCrminal(string name);
	void mostOccuredCrime();

};

#endif 