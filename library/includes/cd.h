#ifndef cd_H
#define cd_H

#include "product.h"


class cidi : public product {

private:

	std::string band;
	std::string genre;

public:

	// Constructors and desctructors
	cidi();
	//cd();
	~cidi();

	// Set methods

	void setPrice(double cdPrice);
	void setTitle(std::string cdTitle);
	void setBand(std::string cdBand);
	void setGenre(std::string cdGenre);

	// Get methods

	double getPrice();
	std::string getTitle();
	std::string getBand();
	std::string getGenre();

};

#endif
