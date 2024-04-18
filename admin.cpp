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
	output << "Name: " << person.name << " Gender: " << person.gender << " Age: " << person.age << " Country: " << person.country;
	output << " Work experience: " << person.work_experience << " Shift length: " << person.shift_length << " Salary: " << person.salary;
	output << " Profession: " << person.speciality << " Number of subs: " << person.sub;
	return output;
}
