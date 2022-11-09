#include <iostream> //enables input/output
#include "Sibling.h" //includes header file

using namespace std; //standard namespace

sibling::sibling() {
  name = ""; //initializes name as empty string
  gender = ""; //initializes gender as empty string
  age = 0; //initializes age as 0
}

void sibling::setName(string newName) {
  name = newName; //sets private var name to function argument
}

void sibling::setGender(string newGender) {
  gender = newGender; //sets private var gender to function argument
}

void sibling::setAge(int newAge) {
  age = newAge; //sets private var age to function arg
}

string sibling::getName() {
  return name; //returns private name var
}

string sibling::getGender() {
  return gender; //returns private gender var
}

int sibling::getAge() {
  return age; //returns private age var
}