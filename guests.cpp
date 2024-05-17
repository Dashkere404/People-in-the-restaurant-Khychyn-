#include "guests.h"
#include <string>
void guest::set_fav_dish(string& dish) {
	this->favorite_dish = dish;
}
void guest::set_amount(double amount) {
	this->purchase_receipt_amount = amount;
}
string guest::get_fav_dish() {
	return favorite_dish;
}
double guest::get_amount() {
	return purchase_receipt_amount;
}
string guest::get_country() {
	return country;
}
ostream& operator<< (ostream& output, const guest& person) {
	output << "Name: " << person.name << "\n" << "Gender: " << person.gender << "\n" << "Age: " << person.age;
	output << "\n" << "Country: " << person.country << "\n" << "Favorite dish: " << person.favorite_dish;
	output << "\n" << "Purchase receipt amount: " << person.purchase_receipt_amount;
	return output;
}
istream& operator>> (istream& input, guest& new_pers) {
	cout << "Enter your name: ";
	getline(input, new_pers.name);
	cout << "Enter your gender(male/female): ";
	getline(input, new_pers.gender);
	cout << "Enter your age: ";
	input >> new_pers.age;
	input.ignore();
	cout << "Enter your country: ";
	getline(input, new_pers.country);
	cout << "Enter your favorite dish: ";
	getline(input, new_pers.favorite_dish);
	return input;
}