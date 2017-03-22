#include "../includes/product.h"
#include <sstream>
bool product::borrowStuff(){

  if(quantity > 0){

    quantity--;
    return true;

  }

  return false;

}

bool product::giveBackStuff(){

  if(quantity <= maxQuantity){

    quantity++;
    return true;

  }

  return false;

}

//Int validation section

// This method basically checks if the number can be converted to int

bool product::numberValidator(std::string number){

  int myNumber;

  std::istringstream isNumber(number);
  if ((isNumber >> myNumber).fail()) {

    return true;

  } else {

    return false;

  }
}

//this method converts the string to int.

int product::convertString(std::string number){

  int returnValue;

  std::istringstream stringNumber(number);

  stringNumber >> returnValue;

  return returnValue;

}
