#include <iostream>
#include "people_in_the_restaurant.h"
#include "guests.h"
#include "workers.h"
#include "kitch.h"
#include "admin.h"
#include "Service_Personnel.h"
#include <string>

int main() {

	cout << "People in the Khychin restaurant" << endl;
	for (int i = 0; i < 32; i++) {
		cout << "-";
	}
	cout << "\n" << endl;

	cout << "Information about restaurant visitors:" << endl;
	string name("Vladislav");
	string gender("male");
	int age = 35;
	string country("Russia");
	people Vladislav(name, gender, age, country);
	cout << "\nVisitor 1" << endl;
	cout << Vladislav << endl;

	string dish("Chicken chkmeruli");
	string country0("China");
	int amount = 1500;
	guest Alexander;
	Alexander.set_fav_dish(dish);
	Alexander.set_amount(amount);
	Alexander.set_country(country0);
	Alexander.set_age(56);
	cout << "\nVisitor 2" << endl;
	cout << Alexander << endl;

	guest Sergey = Alexander;
	cout << "\nVisitor 3" << endl;
	cout << Sergey << endl;


	cout << "\nInformation about restaurant employees:" << endl;
	string name1("Maria");
	string gender1("female");
	string country1("Norway");
	worker Maria(name1, gender1, 19, country1, 2.5, 8);
	cout << "\nWorker 1" << endl;
	cout << Maria << endl;

	Maria.set_age(20);
	cout << "New age of " << Maria.get_name() << ": " << Maria.get_age() << endl;

	string dishes("Asian food");
	string prof("Cook");
	string name3("Darya");
	string country3("Russia");
	string gender3("female");
	staff Darya(name3, gender3, 18, country3, 3, 9, prof, dishes);
	cout << "\nWorker 2" << endl;
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
	cout << "\nWorker 3" << endl;
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
	cout << "\nWorker 4" << endl;
	cout << Gena << endl;

	cout << "\nHello, dear visitor!\nPlease enter your details to be added to the list of customers." << endl;
	guest new_guest;
	cin >> new_guest;
	cout << "\nInformation about new visitor: " << endl;
	cout << new_guest << endl;
}