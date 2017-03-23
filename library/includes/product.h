#include <string>
#ifndef product_H
#define product_H

class product {

protected:

	std::string title;
	double price;
	int quantity;
	int maxQuantity;

public:

	void setQuantity(int numberOfEverything);
	int getQuantity();
	int getMaxQuantity();
	bool borrowStuff();
	bool giveBackStuff();
	bool numberValidator(std::string number);
	int convertString(std::string number);

};

#endif
