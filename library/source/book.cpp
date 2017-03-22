#include "../includes/book.h"
#include <iostream>

using namespace std;

// Constructors and destructors

book::book(){

	author = "";
	genre = "";
	title = "";
	price = 0;

}

book::~book(){

	//

}

void book::setPrice(double bookPrice) {

	price = bookPrice;

}

void book::setGenre(string bookGenre) {

	genre = bookGenre;

}

void book::setTitle(string bookTitle) {

	title = bookTitle;

}

void book::setAuthor(string bookAuthor) {

	author = bookAuthor;

}

string book::getGenre() {

	return genre;

}

string book::getTitle() {

	return title;

}

string book::getAuthor() {


	return author;

}

double book::getPrice() {

	return price;

}
