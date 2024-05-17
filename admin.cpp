#include "admin.h"

void admin::set_spec(string& spec) {
	speciality = spec + " speciality";
}
void admin::set_sub(int sub) {
	this->sub = sub;
}
string admin::get_spec() {
	return speciality;
}
int admin::get_sub() {
	return sub;
}
ostream& operator<< (ostream& output, const admin& person) {
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country << "\n" << "Work experience: " << person.work_experience;
	output << "\n" << "Shift length: " << person.shift_length << "\n" << "Salary: " << person.salary;
	output << "\n" << "Profession: " << person.speciality << "\n" << "Number of subs: " << person.sub;
	return output;
}
