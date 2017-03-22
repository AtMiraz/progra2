#include "./includes/agenda.h"
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  
  agenda myagenda = agenda();

  //Creation of the first object with a constructor
  agenda agenda2 = agenda("Antonio", "asdd@asd.fasd", "41-1-1-1", "Privada de guerrero");

  string temp = "";
  string name1, email1, phonenumber1, address1;
  int menuOption = 0;
  bool menu = true;

  //Creation of the second object with an empty constructor
  cout << "Give me a name:" << '\n';
  cin >> temp;
  myagenda.setName(temp);

  cout << "Give me an address:" << '\n';
  cin >> temp;
  myagenda.setAddress(temp);

  cout << "Give me an email" << '\n';
  cin >> temp;
  myagenda.setEmail(temp);

  cout << "Give me a phone number" << '\n';
  cin >> temp;
  myagenda.setPhoneNumber(temp);

  //Requesting data for the third object
  cout << "Give me a name:" << '\n';
  cin >> name1;

  cout << "Give me an address:" << '\n';
  cin >> address1;

  cout << "Give me an email" << '\n';
  cin >> email1;

  cout << "Give me a phone number" << '\n';
  cin >> phonenumber1;

  //Creation of third object
  agenda agenda3 = agenda(name1, email1, phonenumber1, address1);

  //Just menu shenanigans
  while (menu) {

    cout << "What do you want to do?" << '\n';
    cout << "1.- Print name.\n2.- Print address.\n3.- Print email. \n4.- Print phone number. \n5.- Set name. \n6.- Set email" << '\n';
    cout << "7.- set address. \n8.- set phone number. \n9.- Delete name. \n10.- Delete address" << '\n';
    cout << "11.- Delete email. \n12.- Delete phone number. \n13.- Exit" << '\n';

    cin >> menuOption;

    if(menuOption == 1) {

      cout << myagenda.getName();
      cout << "\n";
      cout << agenda2.getName();
      cout << "\n";
      cout << agenda3.getName();
      cout << "\n";

    } else if(menuOption == 2) {

      cout << myagenda.getAddress();
      cout << "\n";
      cout << agenda2.getAddress();
      cout << "\n";
      cout << agenda3.getAddress();
      cout << "\n";

    } else if(menuOption == 3) {

      cout << myagenda.getEmail();
      cout << "\n";
      cout << agenda2.getEmail();
      cout << "\n";
      cout << agenda3.getEmail();
      cout << "\n";

    } else if(menuOption == 4) {

      cout << myagenda.getPhoneNumber();
      cout << "\n";
      cout << agenda2.getPhoneNumber();
      cout << "\n";
      cout << agenda3.getPhoneNumber();
      cout << "\n";

    } else if(menuOption == 5) {

      cout << "Give me a name:" << '\n';
      cin >> temp;
      myagenda.setName(temp);
      cout << "\n";

    } else if(menuOption == 6) {

      cout << "Give me an email" << '\n';
      cin >> temp;
      myagenda.setEmail(temp);
      cout << "\n";

    } else if(menuOption == 7) {

      cout << "Give me an address:" << '\n';
      cin >> temp;
      myagenda.setAddress(temp);
      cout << "\n";

    } else if(menuOption == 8) {

      cout << "Give me a phone number" << '\n';
      cin >> temp;
      myagenda.setPhoneNumber(temp);
      cout << "\n";

    } else if(menuOption == 9) {

      myagenda.deleteName();
      cout << "Successfully deleted" << '\n';
      cout << "\n";

    } else if(menuOption == 10) {

      myagenda.deleteAddress();
      cout << "Successfully deleted" << '\n';
      cout << "\n";

    } else if(menuOption == 11) {

      myagenda.deleteEmail();
      cout << "Successfully deleted" << '\n';
      cout << "\n";

    } else if(menuOption == 12) {

      myagenda.deletePhoneNumber();
      cout << "Successfully deleted" << '\n';
      cout << "\n";

    } else if (menuOption ==13) {

      menu = false;

    } else {

      cout << "Select a valid option!" << '\n';

    }

  }

  return 0;

}
