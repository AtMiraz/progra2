
#include <string>
class agenda{

private:

  std::string name;
  std::string email;
  std::string phoneNumber;
  std::string address;

public:

  agenda(std::string name, std::string email, std::string phoneNumber, std::string address);
  agenda();
  ~agenda();

  void setName(std::string name);

  void setEmail(std::string email);

  void setPhoneNumber(std::string phoneNumber);

  void setAddress(std::string address);

  std::string getName();

  std::string getEmail();

  std::string getPhoneNumber();

  std::string getAddress();

  bool deleteName();

  bool deletePhoneNumber();

  bool deleteEmail();

  bool deleteAddress();


};
