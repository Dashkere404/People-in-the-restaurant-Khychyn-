#ifndef PEOPLE
#define PEOPLE
#include <iostream>
using namespace std;

class people {
protected:
	string name;
	string gender;
	int age;
	string country;

public:
	string get_name();
	void set_name(string& name);
	string get_gender();
	void set_gender(string& gender);
	int get_age();
	void set_age(int age);
	virtual string get_country();
	void set_country(string& country);

	people() {
		name = string("Albert");
		gender = string("male");
		age = 0;
		country = string("Georgia");
	}
	people(string& NAME, string& gender, int age, string& COUNTRY) {
		name = NAME;
		this->gender = gender;
		this->age = age;
		country = COUNTRY;
	}

	friend ostream& operator<< (ostream& output, const people& person);

};

#endif