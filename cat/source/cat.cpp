#include "../includes/cat.h"


// Constructor and destructors.

cat::cat(){

	name = "";
	colour = "";
	food = "";
	tailLength = 0;

}

cat::~cat(){

	//

}

// set and get methods.

void cat::setName(std::string catName) {

	name = catName;

}

void cat::setColour(std::string catColour) {

	colour = catColour;
}

void cat::setFood(std::string catFood) {

	food = catFood;

}

void cat::setTailLength(double catTail){

	tailLength = catTail;

}

std::string cat::getName() {

	return name;

}

std::string cat::getColour() {

	return colour;

}

std::string cat::getFood() {

	return food;

}

double cat::getTailLength() {

	return tailLength;

}
