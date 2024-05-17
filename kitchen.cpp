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
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country << "\n" << "Work experience: " << person.work_experience;
	output << "\n" << "Shift length: " << person.shift_length  << "\n" << "Salary: " << person.salary;
	output << "\n" << "Profession: " << person.speciality << "\n" << "Dishes: " << person.dishes;
	return output;
}
