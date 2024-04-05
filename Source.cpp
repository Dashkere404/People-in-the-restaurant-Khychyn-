#include <iostream>
#include "people_in_the_restaurant.h"
#include "guests.h"
#include "workers.h"
#include "kitch.h"
#include "admin.h"
#include "Service_Personnel.h"

int main() {
	string name("Vladislav");
	string gender("male");
	int age = 35;
	string country("Russia");
	people Vladislav(name, gender, age, country);
	cout << Vladislav << endl;

	string dish("Chicken chkmeruli");
	string country0("China");
	int amount = 1500;
	guest Alexander;
	Alexander.set_fav_dish(dish);
	Alexander.set_amount(amount);
	Alexander.set_country(country0);
	Alexander.set_age(56);
	cout << Alexander << endl;

	guest Sergey = Alexander;
	cout << Sergey << endl;


	string name1("Maria");
	string gender1("female");
	string country1("Norway");
	worker Maria(name1, gender1, 19, country1, 2.5, 8);
	cout << Maria << endl;

	Maria.set_age(20);
	cout << "New age of " << Maria.get_name() << ": " << Maria.get_age() << endl;

	string dishes("Asian food");
	string prof("Cook");
	string name3("Darya");
	string country3("Russia");
	string gender3("female");
	staff Darya(name3, gender3, 18, country3, 3, 9, prof, dishes);
	cout << Darya << endl;

	admin Pavel;
	string name4("Pavel");
	string prof2("Purchasing manager");
	string gender4("male");
	Pavel.set_name(name4);
	Pavel.set_gender(gender4);
	Pavel.set_spec(prof2);
	Pavel.set_work_experience(5);
	Pavel.set_shift_length(10);
	Pavel.set_age(68);
	Pavel.set_salary(500000);
	Pavel.set_sub(30);
	cout << Pavel << endl;

	int exper(1);
	int shifter(8);
	string speci("Waiter");
	int aver(5000);
	int order(10);
	int rat(4);
	string nam2("Marja");
	int age2(18);
	string gena2("Female");
	string fr2("Germany");
	personnel Gena(nam2, gena2, age2, fr2, exper, shifter, speci, aver, order, rat);
	cout << Gena << endl;
	
	
}