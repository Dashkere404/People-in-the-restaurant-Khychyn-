#include "Service_Personnel.h"
string personnel::get_spec() {
	return speciality;
}
int personnel::get_avar() {
	return average;
}
int personnel::get_ord() {
	return orders;
}
int personnel::get_rat() {
	return rating;
}
void personnel::set_avar(int avara) {
	average = avara;
}
void personnel::set_ord(int order) {
	orders = order;
}
void personnel::set_rat(int rating) {
	this->rating = rating;
}
void personnel::set_spec(string& speci) {
	speciality = speci + " speciality";
}
ostream& operator<< (ostream& output, const personnel& person) {
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender  << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country << "\n" << "Work experience: " << person.work_experience;
	output << "\n" << "Shift length: " << person.shift_length << "\n" << "Salary: " << person.salary;
	output << "\n" << "Profession: " << person.speciality << "\n" << "Average tip: " << person.average;
	output << "\n" << "Number of orders: " << person.orders << "\n" << "Rating: " << person.rating;
	return output;
}
