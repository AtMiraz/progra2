#include <iostream>
#include "./includes/book.h"
#include "./includes/cd.h"
#include "./includes/megazine.h"

using namespace std;

int main(int argc, char const *argv[]) {

	//Variables
	string title; // Anything that is a string really.
	double price;

	// Creating the objects to give them attributes later
	book aBook = book();
	megazine aMegazine = megazine();
	cidi aCD = cidi();

	// Assigning attributes to aBook Book object
	cout << "------| Book data. |------" << '\n';
	cout << "Give me book's name: ";
	getline(cin, title);
	aBook.setTitle(title);

	cout << "Give me the book's author: ";
	getline(cin, title);
	aBook.setAuthor(title);

	cout << "Give me the book's genre: ";
	getline(cin, title);
	aBook.setGenre(title);

	cout << "Give me the book's price: ";
	do{
		getline(cin, title);
	}while(aBook.numberValidator(title));
	aBook.setPrice(aBook.convertString(title));

	// Getting the values for the CD object.
	cout << "------| CD data. |------" << '\n';
	cout << "Give me the CD's name: ";
	getline(cin, title);
	aCD.setTitle(title);

	cout << "Give me the CD's band: ";
	getline(cin, title);
	aCD.setBand(title);

	cout << "Give me the CD's genre: ";
	getline(cin, title);
	aCD.setGenre(title);

	cout << "Give me the CD's price: ";
	do{
		getline(cin, title);
	}while(aCD.numberValidator(title));
	aCD.setPrice(aCD.convertString(title));

	// Finally getting the values for the megazine object and assigning them
	cout << "------| Megazine data. |------" << '\n';
	cout << "Give me the megazine's name: ";
	getline(cin, title);
	aMegazine.setTitle(title);

	cout << "Give me the megazine's edition: ";
	getline(cin, title);
	aMegazine.setEdition(title);

	cout << "Give me the megazine's price: ";
	do{
		getline(cin, title);
	}while(aMegazine.numberValidator(title));
	aMegazine.setPrice(aMegazine.convertString(title));

	// Print the state of every object.
	cout << "\n\n------| Book data. |------" << '\n';
	cout << "Title: ";
	cout << aBook.getTitle();
	cout << "\nAuthor: ";
	cout << aBook.getAuthor();
	cout << "\nPrice ";
	cout << aBook.getPrice();
	cout << "\nGenre: ";
	cout << aBook.getGenre();

	cout << "\n\n------| CD data. |------" << '\n';
	cout << "Band: ";
	cout << aCD.getBand();
	cout << "\nTitle: ";
	cout << aCD.getTitle();
	cout << "\nGenre: ";
	cout << aCD.getGenre();
	cout << "\nPrice: ";
	cout << aCD.getPrice();

	cout << "\n\n------| Megazine data. |------" << '\n';
	cout << "Title: ";
	cout << aMegazine.getTitle();
	cout << "\nEdition: ";
	cout << aMegazine.getEdition();
	cout << "\nPrice: ";
	cout << aMegazine.getPrice();

	cout << "\nThat's everything." << '\n';

	return 0;
}
