#include <iostream>
#include "../includes/book.h"

using namespace std;

//Constructors and destructors
book::book() {

  title = "";
  author = "";
  quantity = 0;
  borrowedQ = 0;

}

book::book(string consTitle, string consAuthor, int consBooks, int consBoBooks) {

  title = consTitle;
  author = consAuthor;
  quantity = consBooks;
  borrowedQ = consBoBooks;
  maxBookQ = quantity;

}

book::~book(){

  //

}

//Get and set methods

void book::setBookTitle(string bTitle) {

  title = bTitle;

}

void book::setBookAuthor(string bAuthor) {

  author = bAuthor;

}

void book::setBookQuantity(int aBook){

  quantity = aBook;
  maxBookQ = quantity;

}

void book::setBorrowedQ(int bBook){

  borrowedQ = bBook;

}

string book::getBookTitle(){

  return title;

}

string book::getBookAuthor(){

  return author;

}

int book::getBookQuantity(){

  return quantity;

}

int book::getBookBorrowedQ(){

  return borrowedQ;

}

//Logical methods

bool book::borrowABook(){

  if(quantity > 0){

    quantity--;
    borrowedQ++;
    return true;

  } else {

    return false;

  }

}

bool book::giveABookBack(){

  if(borrowedQ >= maxBookQ){

    borrowedQ--;
    quantity++;
    return true;

  } else {

    return false;

  }

}
