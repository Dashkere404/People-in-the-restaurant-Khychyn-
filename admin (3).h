#ifndef admin_h
#define admin_h
#include "workers.h"

class admin : public worker {
private:
	string speciality;
	int sub;
public:
	string get_spec();
	void set_spec(string& spec);
	int get_sub();
	void set_sub(int sub);
	admin() {
		speciality = "no speciality";
		sub = 0;
	}
	admin(string& NAME, string& gender, int age, string& COUNTRY, double work_experience, int shift_length, string& spec, int sub) : worker(NAME, gender, age, COUNTRY, work_experience, shift_length) {
		speciality = spec + " speciality";
		this->sub = sub;
	}
	friend ostream& operator<< (ostream& output, const admin& person);
};
#endif
