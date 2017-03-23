#include <iostream>
#include "./includes/book.h"
#include "./includes/cd.h"
#include "./includes/megazine.h"

using namespace std;

int main(int argc, char const *argv[]) {

	//Variables
	string title; // Anything that is a string really.
	double price;
	bool menu = true;

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

	cout << "Give me the number of available books: ";
	do{
		getline(cin, title);
	}while(aBook.numberValidator(title));
	aBook.setQuantity(aBook.convertString(title));

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

	cout << "Give me the number of available CDs: ";
	do{
		getline(cin, title);
	}while(aCD.numberValidator(title));
	aCD.setQuantity(aCD.convertString(title));

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

	cout << "Give me the number of available: ";
	do{
		getline(cin, title);
	}while(aMegazine.numberValidator(title));
	aMegazine.setQuantity(aMegazine.convertString(title));

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

	//Menu shenanigans, just adding some functionality to fill in.

	while(menu){

		cout << "\nWhat do you want to do?" << '\n';
		cout << "1.- Borrow a book\n2.- Give a book back\n3.- Borrow a CD\n4.- Give a CD back\n5.- Borrow a megazine\n6.- Give back a megazine\n7.- Check availability\n8.- Exit\nChoice: ";
		getline(cin, title);

		if(title == "1") {

			if(aBook.borrowStuff()){

				cout << "Successfully borrowed a book." << '\n';

			} else {

					cout << "There was an error trying to borrow the book, try giving 1 book back?" << '\n';

			}

		} else if(title == "2") {

			if(aBook.giveBackStuff()){

				cout << "Successfully gave back the book." << '\n';

			} else {

				cout << "There was an error trying to give back the book are you sure you borrowed a book before?" << '\n';

			}

		} else if(title == "3") {

			if(aCD.borrowStuff()){

				cout << "Successfully borrowed the CD." << '\n';


			} else {

				cout << "There was an error trying to borrow the book, try giving 1 book back?" << '\n';

			}

		} else if(title == "4") {

			if(aCD.giveBackStuff()){

				cout << "Successfully gave back the CD." << '\n';


			} else {

				cout << "There was an error trying to give back the CD, are you sure you borrowed a book before?" << '\n';

			}

		} else if(title == "5") {

			if(aMegazine.borrowStuff()){

				cout << "Successfully borrowed the megazine." << '\n';

			} else {

				cout << "There was an error trying to borrow the megazine, try giving 1 megazine back?" << '\n';

			}

		} else if(title == "6") {

			if(aMegazine.giveBackStuff()){

				cout << "Successfully gave back the megazine." << '\n';

			} else {

				cout << "There was an error trying to give back the CD, are you sure you borrowed a megazine before?" << '\n';

			}

		} else if(title == "7"){

			cout << "Books: ";
			cout << aBook.getQuantity() << '\n';
			cout << "CDs: ";
			cout << aCD.getQuantity() << '\n';
			cout << "Magazine: ";
			cout << aMegazine.getQuantity() << '\n';

		} else if(title == "8"){

			menu = false;
			cout << "Exit..." << '\n';

		}else {

			cout << "Please select a valid option." << '\n';

		}
	}

	return 0;
}
