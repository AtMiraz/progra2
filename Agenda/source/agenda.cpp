#include <iostream>
#include "../includes/agenda.h"

using namespace std;

  //Added a constructor with parameters

  agenda::agenda(){

    //

  }

 agenda::agenda(string consnombre, string consemail, string consphoneNumber, string consaddress){

  name = consnombre;
  email = consemail;
  phoneNumber = consphoneNumber;
  address = consaddress;

}

agenda::~agenda(){

  //

}

void agenda::setName(string setname){

  name = setname;

}

void agenda::setPhoneNumber(string setphoneNumber){

  phoneNumber = setphoneNumber;

}

void agenda::setEmail(string setemail){

  email = setemail;

}

void agenda::setAddress(string setaddress){

  address = setaddress;

}

string agenda::getName(){

  return name;

}

string agenda::getPhoneNumber(){

  return phoneNumber;

}

string agenda::getEmail(){

  return email;

}

string agenda::getAddress(){

  return address;

}

bool agenda::deleteName(){

  name = "";
  return true;

}

bool agenda::deleteEmail(){

  email = "";
  return true;

}

bool agenda::deleteAddress(){

  address = "";
  return true;

}

bool agenda::deletePhoneNumber(){

  phoneNumber = "";
  return true;

}
