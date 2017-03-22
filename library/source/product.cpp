#include "../includes/product.h"

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

bool product::numberValidator(std::string number){

  //

}
