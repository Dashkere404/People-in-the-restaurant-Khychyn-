#include "kitch.h"
string staff::get_dishes() {
	return dishes;
}
string staff::get_spec() {
	return speciality;
}
void staff::set_dishes(string& dish) {
	dishes = dish + " dish";
}
void staff::set_spec(string& spec) {
	speciality = spec + " speciality";
}
ostream& operator<< (ostream& output, const staff& person) {
	output << "Name: " << person.name << " Gender: " << person.gender << " Age: " << person.age << " Country: " << person.country;
	output << " Work experience: " << person.work_experience << " Shift length: " << person.shift_length << " Salary: " << person.salary;
	output << " Profession: " << person.speciality << " Dishes: " << person.dishes;
	return output;
}
