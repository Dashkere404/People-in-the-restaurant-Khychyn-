#ifndef Service_h
#define SErvice_h
#include <iostream>
#include "workers.h"

class personnel : public worker {
private:
	string speciality;
	int average;
	int orders;
	int rating;
public:
	string get_spec();
	void set_spec(string& speci);
	int get_avar();
	void set_avar(int avara);
	int get_ord();
	void set_ord(int order);
	int get_rat();
	void set_rat(int rating);
	personnel() {
		speciality = "no speciality";
		average = 0;
		orders = 0;
		rating = 0;
	};
	personnel(const personnel& second) {
		this->speciality = speciality;
		this->average = average - 500;
		this->orders = orders - 4;
	}
	personnel(string& NAME, string& gender, int age, string& COUNTRY, double work_experience, int shift_length, string& spec, int aver, int ord, int rat) : worker(NAME, gender, age, COUNTRY, work_experience, shift_length) {
		speciality = spec + " speciality";
		average = aver / ord;
		orders = ord;
		rating = rat;
	}
	friend ostream& operator<< (ostream& output, const personnel& person);
};
#endif
