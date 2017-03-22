#include "../includes/bootscat.h"


// Constructor and destructors.

bootscat::bootscat(){

	bootBrand = "";
	bootSize = "";

}

bootscat::~bootscat(){



}

// Set methods

void bootscat::setBootBrand(std::string brand) {

	bootBrand = brand;

}

void bootscat::setBootSize(std::string size) {

	bootSize = size;

}

// Get methods

std::string bootscat::getBootBrand(){

	return bootBrand;

}

std::string bootscat::getBootSize(){

	return bootSize;

}

// Logical methods
