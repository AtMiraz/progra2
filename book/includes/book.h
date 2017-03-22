#include <string>

class book{

private:

  std::string author;
  std::string title;
  int quantity;
  int borrowedQ; //Borrowed book quantity
  int maxBookQ; //Max book quantity

public:

  //constructors
  book();
  book(std::string author, std::string title, int quantity, int borrowed);
  //destructor
  ~book();

  //set methods
  void setBookTitle(std::string author);
  void setBookAuthor(std::string title);
  void setBookQuantity(int quantity);
  void setBorrowedQ(int borrowed);

  //get methods
  std::string getBookTitle();
  std::string getBookAuthor();
  int getBookQuantity();
  int getBookBorrowedQ();

  //Logical methods
  bool borrowABook();
  bool giveABookBack();

};
