#include <string>

class cat{

protected:

	// Attributes

	std::string name;
	std::string colour;
	std::string food;
	double tailLength;

public:

	//Constructor and destructor.

	cat();
	~cat();

	//Set cat's attributes.

	void setName(std::string catName);
	void setColour(std::string catColour);
	void setFood(std::string catFood);
	void setTailLength(double catTail);

	// Get methods

	std::string getName();
	std::string getColour();
	std::string getFood();
	double getTailLength();
};
