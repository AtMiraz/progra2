#include "../includes/cd.h"
#include <iostream>

using namespace std;

// Constructors and destructors

cidi::cidi(){

	title = "";
	band = "";
	genre = "";
	price = 0;

}

//cd::cd() {

//	title = "";
//	band = "";
//	genre = "";
//	price = 0;


//}

cidi::~cidi() {

	//

}

// Set methods

void cidi::setPrice(double cdPrice) {

	price = cdPrice;

}

void cidi::setTitle(string cdTitle) {

	title = cdTitle;

}

void cidi::setBand(string cdBand) {

	band = cdBand;

}

void cidi::setGenre(string cdGenre) {

	genre = cdGenre;

}

// Get methods.

double cidi::getPrice() {

	return price;

}

string cidi::getTitle() {

	return title;

}

string cidi::getBand() {

	return band;

}

string cidi::getGenre(){

	return genre;

}
