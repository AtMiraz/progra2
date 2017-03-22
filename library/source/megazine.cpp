#include "../includes/megazine.h"
#include <string>

using namespace std;

// Constructors and destructors.

megazine::megazine(){

	edition = "";
	title = "";
	price = 0;

}

megazine::~megazine(){

	//

}

//Set methods

void megazine::setPrice(double megazinePrice) {

	price = megazinePrice;

}

void megazine::setTitle(string megazineTitle) {

	title = megazineTitle;

}

void megazine::setEdition(string megazineEdition) {

	edition = megazineEdition;

}

//Get methods

double megazine::getPrice() {

	return price;

}

string megazine::getTitle() {

	return title;

}

string megazine::getEdition() {

	return edition;

}
