#ifndef staff_h
#define staff_h
#include "workers.h"
#include <iostream>

class staff : public worker {
private:
	string speciality;
	string dishes;
public:
	string get_spec();
	void set_spec(string& spec);
	string get_dishes();
	void set_dishes(string& dish);
	staff() {
		speciality = "no speciality";
		dishes = "no dishes";
	}
	staff(string& NAME, string& gender, int age, string& COUNTRY, double work_experience, int shift_length, string& spec, string& dish) : worker (NAME, gender, age, COUNTRY, work_experience, shift_length) {
		speciality = spec + " speciality";
		dishes = dish + " dish";
	}
	friend ostream& operator<< (ostream& output, const staff& person);
};
#endif
