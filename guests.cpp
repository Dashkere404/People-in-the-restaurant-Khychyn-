#include "guests.h"
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
	output << "Name: " << person.name << " Gender: " << person.gender << " Age: " << person.age << " Country: " << person.country;
	output << " Favorite dish: " << person.favorite_dish << " Purchase receipt amount: " << person.purchase_receipt_amount;
	return output;
}