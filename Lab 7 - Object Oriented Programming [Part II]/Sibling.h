// allows Sibling_H to be included
#ifndef Sibling_H
#define Sibling_H
#include <iostream>

using namespace std;

class sibling {
  private:
  string name;
  string gender;
  int age;

  public:
  sibling();
  void setName(string newName);
  void setGender(string newGender);
  void setAge(int newAge);
  string getName();
  string getGender();
  int getAge();
  sibling operator>(sibling);
  sibling operator<(sibling);

};

#endif