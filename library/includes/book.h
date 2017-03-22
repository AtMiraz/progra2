#ifndef book_H
#define book_H
#include "product.h"

class book : public product {

private:

	std::string author;
	std::string genre;

public:

	// Constructor and desctructors.

	book();
	~book();

	// Set methods.

	void setPrice(double bookPrice);
	void setTitle(std::string bookTitle);
	void setAuthor(std::string bookAuthor);
	void setGenre(std::string bookGenre);

	// Get methods.

	double getPrice();
	std::string getTitle();
	std::string getAuthor();
	std::string getGenre();

};

#endif
