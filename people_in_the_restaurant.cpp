#include "people_in_the_restaurant.h"
void people::set_name(string& nm) {
	this->name = nm;
}
void people::set_gender(string& gender) {
	this->gender = gender;
}
void people::set_age(int age) {
	this->age = age;
}
void people::set_country(string& country) {
	this->country = country;
}
string people::get_name() {
	return name;
}
string people::get_gender() {
	return gender;
}
int people::get_age() {
	return age;
}
string people::get_country() {
	return country;
}

ostream& operator<< (ostream& output, const people& person) {
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country;
	return output;
}