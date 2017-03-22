#include "./includes/book.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  //Creation of fixed book object
  book bkmono = book("Nisiosin", "Bakemonogatari", 10, 0);
  book custombook = book();

  string bookAuthor;
  string bookTitle;
  string menu_2;
  string menuchoice;
  int quantity;
  bool menu = true;

  //creation of custom book object
  cout << "Give me the book Author" << '\n';
  getline(cin, bookAuthor);
  custombook.setBookAuthor(bookAuthor);
  cout << "\n";

  cout << "Give me the book title" << '\n';
  getline(cin, bookTitle);
  custombook.setBookTitle(bookTitle);
  cout << "\n";

  cout << "Give me the book quantity" << '\n';
  cin >> quantity;
  custombook.setBookQuantity(quantity);
  cout << "\n";

  custombook.setBorrowedQ(0);

  //Menu shenanigans
  while (menu) {

    cout << "Library system." << '\n';
    cout << "1.- View books Author.\n2.- View books title.\n3.- View books available quantity." << '\n';
    cout << "4.- Borrow a book.\n5.- Give a book back.\n6.- Quit." << '\n';
    getline(cin, menuchoice);

    if(menuchoice == "1"){

      cout << bkmono.getBookAuthor();
      cout << "\n";
      cout << custombook.getBookAuthor();
      cout << "\n";

    } else
    if (menuchoice == "2") {

      cout << bkmono.getBookTitle();
      cout << "\n";
      cout << custombook.getBookTitle();
      cout << "\n";

    } else
    if (menuchoice == "3") {

      cout << bkmono.getBookTitle();
      cout << " " << bkmono.getBookQuantity();
      cout << "\n";
      cout << custombook.getBookTitle();
      cout << " " << custombook.getBookQuantity();
      cout << "\n";

    //This entire block is for borrowing a book
    } else
    if(menuchoice == "4") {

      cout << "Which book do you want to borrow?" << '\n';
      cout << "1.- " << bkmono.getBookTitle();
      cout << "\n";
      cout << "2.- " << custombook.getBookTitle();
      cout << "\n";
      getline(cin, menu_2);

      if(menu_2 == "1"){

        if(bkmono.borrowABook()){

          cout << "succefully borrowed" << '\n';

        } else {

          cout << "There was an error borrowing this book. Try giving it back?" << '\n';

        }

      } else
      if(menu_2 == "2") {

        if(custombook.borrowABook()){

          cout << "succefully borrowed" << '\n';

        } else {

          cout << "There was an error borrowing this book. Try giving it back?" << '\n';

        }

      } else {

        cout << "Select a valid option!" << '\n';

        }

    //This is where giving back a book stuff goes
  } else if (menuchoice == "5") {

      cout << "Which book do you want to give back?" << '\n';
      cout << "1.- " << bkmono.getBookTitle();
      cout << "\n";
      cout << "2.- " << custombook.getBookTitle();
      cout << "\n";
      getline(cin, menu_2);

        if(menu_2 == "1") {

          if(bkmono.giveABookBack()){

            cout << "Thanks for giving the book back." << '\n';

          } else {

            cout << "There was an error giving the book back, are you sure you borrowed it?" << '\n';

          }

        } else
          if(menu_2 == "2" ){

            if(custombook.giveABookBack()){

              cout << "Thanks for giving the book back." << '\n';

            } else {

              cout << "There was an error giving the book back, are you sure you borrowed it?" << '\n';

            }

          }

      } else
      if(menuchoice == "6"){

        menu = false;

      } else {

        cout << "Choose a valid option!" << '\n';

      }
  }

  return 0;
}
