#ifndef WORKER
#define WORKER
#include <iostream>
#include "people_in_the_restaurant.h"

class worker : public people {
protected:
	double work_experience;
	double salary;
	int shift_length;

public:
	double get_work_experience();
	void set_work_experience(double work_experience);
	double get_salary();
	void set_salary(double purchase_receipt_amount);
	int get_shift_length();
	void set_shift_length(int shift_length);

	worker() {
		work_experience = 0.0;
		salary = 0.0;
		shift_length = 0;
	}
	worker(string& NAME, string& gender, int age, string& COUNTRY, double work_experience, int shift_length) : people(NAME, gender, age, COUNTRY) {
		this->work_experience = work_experience;
		this->shift_length = shift_length;
		salary = shift_length * 150 * work_experience * 24;
	}
	friend ostream& operator<< (ostream& output, const worker& person);
};

#endif