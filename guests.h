#ifndef GUEST
#define GUEST
#include <iostream>
#include "people_in_the_restaurant.h"

class guest : public people {
private:
	string favorite_dish;
	double purchase_receipt_amount;

public:
	string  get_fav_dish();
	void set_fav_dish(string& favorite_dish);
	double get_amount();
	void set_amount(double purchase_receipt_amount);
	string get_country() override;

	guest(const guest& replica) {
		this->favorite_dish = replica.favorite_dish + " " + string("spicier");
		this->purchase_receipt_amount = replica.purchase_receipt_amount * 3;
	}
	guest() {
		favorite_dish = string("Khychyn");
		purchase_receipt_amount = 0.0;
	}
	guest(string& NAME, string& gender, int age, string& COUNTRY, string& favorite_dish, double purchase_receipt_amount) : people(NAME, gender, age, COUNTRY) {
		this->favorite_dish = favorite_dish;
		this->purchase_receipt_amount = purchase_receipt_amount;
	}
	friend ostream& operator<< (ostream& output, const guest& person);
};

#endif