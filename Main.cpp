#include <iostream>
//#include "Countable.h"
//#include "Identifiable.h"
//#include "Mohican.h"
#include "Passport.h"

int main() {
	Passport* pass1 = new Passport("Ivan", "Ivanov", 5, 6, 1989);
	Passport* pass2 = new Passport("Sergey", "Sidorov", 23, 11, 1981);
	Passport* pass3 = new Passport("Artem", "Petrov", 9, 1, 2000);

	std::cout << *pass1 << std::endl;
	std::cout << *pass2 << std::endl;
	std::cout << *pass3 << std::endl;

	Passport* pass4 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass5 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass6 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass7 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass8 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass9 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass10 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass11 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass12 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass13 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass14 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass15 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass16 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass17 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass18 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass19 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass20 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass21 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass22 = new Passport("Abel", "Tesfaye", 17, 12, 1991);
	Passport* pass23 = new Passport("Artur", "Loza", 7, 10, 2002);
	Passport* pass24 = new Passport("Jared", "Leto", 2, 1, 1980);
	Passport* pass25 = new Passport("Abel", "Tesfaye", 17, 12, 1991);

	std::cout << *pass4 << std::endl;
	std::cout << *pass5 << std::endl;
	std::cout << *pass6 << std::endl;
	std::cout << *pass7 << std::endl;
	std::cout << *pass8 << std::endl;
	std::cout << *pass9 << std::endl;
	std::cout << *pass10 << std::endl;
	std::cout << *pass11 << std::endl;
	std::cout << *pass13 << std::endl;
	std::cout << *pass14 << std::endl;
	std::cout << *pass15 << std::endl;
	std::cout << *pass16 << std::endl;
	std::cout << *pass17 << std::endl;
	std::cout << *pass18 << std::endl;
	std::cout << *pass19 << std::endl;
	std::cout << *pass20 << std::endl;
	std::cout << *pass21 << std::endl;
	std::cout << *pass22 << std::endl;
	std::cout << *pass23 << std::endl;
	std::cout << *pass24 << std::endl;

	delete pass1;
	delete pass2;
	delete pass3;
	delete pass4;
	delete pass5;
	delete pass6;
	delete pass7;
	delete pass8;
	delete pass9;
	delete pass10;
	delete pass11;
	delete pass12;
	delete pass13;
	delete pass14;
	delete pass15;
	delete pass16;
	delete pass17;
	delete pass18;
	delete pass19;
	delete pass20;
	delete pass21;
	delete pass22;
	delete pass23;
	delete pass24;

	return 0;
}