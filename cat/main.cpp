#include "./includes/bootscat.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {


	// Father class.

	cat fatherCat = cat();

	fatherCat.setName("IDK");
	fatherCat.setColour("Brown");
	fatherCat.setFood("cat's food lmao");
	fatherCat.setTailLength(15);

	bootscat maybeACat = bootscat();

	// Inherited class.

	maybeACat.setName("This an inherited name");
	maybeACat.setColour("This is an inherited colour");
	maybeACat.setFood("This is an inherited food");
	maybeACat.setTailLength(20);
	maybeACat.setBootBrand("stuff aasdasd");
	maybeACat.setBootSize("12");

	// Printing all the stuff

	cout << "Father's cat data." << '\n';
	cout << fatherCat.getName();
	cout << '\n';
	cout << fatherCat.getColour();
	cout << '\n';
	cout << fatherCat.getFood();
	cout << '\n';
	cout << fatherCat.getTailLength();

	cout << "Children's data";
	cout << '\n';
	cout << maybeACat.getName();
	cout << '\n';
	cout << maybeACat.getColour();
	cout << '\n';
	cout << maybeACat.getFood();
	cout << '\n';
	cout << maybeACat.getBootBrand();
	cout << '\n';
	cout << maybeACat.getBootSize();
	cout << '\n';
	return 0;
}
