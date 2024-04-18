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
	output << "Name: " << person.name << " Gender: " << person.gender << " Age: " << person.age << " Country: " << person.country;
	output << " Work experience: " << person.work_experience << " Shift length: " << person.shift_length << " Salary: " << person.salary;
	output << " Profession: " << person.speciality << " Average tip: " << person.average << " Number of orders: " << person.orders << " Rating: " << person.rating;
	return output;
}
