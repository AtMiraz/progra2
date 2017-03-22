#include <string>
#include "cat.h"
class bootscat : public cat {

private:

	// Attributes

	std::string bootBrand;
	std::string bootSize;

public:

	// Constructor and desctructor

	bootscat();
	~bootscat();

	// Set and get methods.

	void setBootBrand(std::string brand);
	void setBootSize(std::string size);

	std::string getBootBrand();
	std::string getBootSize();

};
