#include "Buyer.h"
#include<iostream>
#include <string>
#include<fstream>
using namespace std;
class Buyer {
	int MinNum;
	int MaxNum;
	int area;
	float price;
	string location;
	string property_type;
	
	// misssing the constructors



public: 
	void listProperties() {}
	void propertyComparison(Buyer b1, Buyer b2, Buyer b3, Buyer b4) {
		cout << "the area of the first property :" <<b1.area ;
		cout << "the area of the secound property :" << b2.area;
		cout << "the area of the third property :" << b3.area;
		cout << "the area of the fourth property :" << b4.area;
		cout << "the location of the first property :" << b1.location;
		cout << "the location of the first property:" << b2.location;
		cout << "the location of the first property :" << b3.location;
		cout << "the location of the first property :" << b4.location;
		cout << "the price of the first property :" << b1.price;
		cout << "the price of the first property :" << b2.price;
		cout << "the price of the first property :" << b3.price;
		cout << "the price of the first property :" << b4.price;
		cout << "the type of the property is :" << b1.property_type;
		cout << "the type of the property is :" << b2.property_type;
		cout << "the type of the property is :" << b3.property_type;
		cout << "the type of the property is :" << b4.property_type;

	}
	void searchBylocation(string location) {
		cout << "enter the location you want to search in :";
		cin >> location;
		
	}
	void searchByproperty_type(string property_type) {
		cout<< "enter the proprty type that you want to search about";
		cin >> property_type;
		
	}
	void searchBypricerange (int MinNum, int MaxNum) {}
	void searchBytitle(string title ) {}
	void fillter(int MinNum, int MaxNum, string location, string property_type ) {}



};
