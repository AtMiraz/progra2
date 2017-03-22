#ifndef megazine_H
#define megazine_H

#include "product.h"
class megazine : public product {

private:

	std::string edition;

public:

	// Constructors and desctructors.

	megazine();
	~megazine();

	// Set methods.

	void setPrice(double megazinePrice);
	void setTitle(std::string megazineTitle);
	void setEdition(std::string megazineEdition);

	// Get methods.

	std::string getEdition();
	std::string getTitle();
	double getPrice();


};

#endif
