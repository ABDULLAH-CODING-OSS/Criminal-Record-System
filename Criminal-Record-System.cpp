
#include <iostream>
#include"Criminals.h"
#include"Date.h"
using namespace std;
int main()
{
	cout << "Enter The Size Of How Many Criminals The Record must Save" << endl;
	int maxSize;
	cin >> maxSize;
	cin.ignore();
	Criminals dataBase(maxSize);
	dataBase.insertCriminal();
	dataBase.insertCriminal();
	dataBase.insertCriminal();
	dataBase.insertCriminal();  // adding criminals

	
	dataBase.sortingName();
	cout << "Enter Name Of Crime To search" << endl;
	string n;
	cin.ignore();
	getline(cin, n);
	 dataBase.binarySearchCrimeType(n);
	 cout << "Enter Name Of Criminal To Update" << endl;
	 string a;
	 cin.ignore();
	 getline(cin, a);
	 dataBase.updateCriminal(a);
	 string b="Theft";
	 dataBase.theftSearch(b);
	 string c = "Murder";
     dataBase.murderSearch(c);
	cout << "Enter Name Of Criminal To Remove" << endl;
	string p;
	cin.ignore();
	getline(cin, p);
	 dataBase.removeCrminal(p);
	 dataBase.mostOccuredCrime();
	 cout << "Enter Name Of Criminal To Be Search" << endl;
	 string x;
	 cin.ignore();
	 getline(cin, p);
	 dataBase.binarySearch(x);
	
}

