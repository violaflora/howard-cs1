#include <iostream>
#include <fstream>
#include "Sibling.h"

using namespace std;

int main() {
  sibling arr[4]; //array of sibling objects, len = 4
  string n, g = ""; //empty strings for name and gender
  int a = 0; //empty int for age

  int currentOldestAge = 0; //stores current oldest age
  int currentOldestIndex = 0; //stores index of current oldest age

  int max = 0; //initializes max for comparison with overloaded operator
  
  ifstream r; //establishes input file stream named r
  r.open("file.txt"); //opens file.txt to be read
  for(int i = 0; i < 4; i++) { //for loop, 4 iterations
    r >> n >> g >> a; //reads name, gender, and age for each person into three different variables
    arr[i].setName(n); //sets name in arr with current index according to loop
    arr[i].setGender(g); //sets gender in arr with current index
    arr[i].setAge(a); //sets age in arr
    if (arr[max].getAge() < arr[i].getAge()) { //compares current max to current index in loop
      max = i; //stores index of maximum age in array
    }
    /*
    //old solution (doesn't use overloaded operators)
    if (a > currentOldestAge) { //if the age being read is greater than the current oldest age (initialized to 0)
      currentOldestAge = a; //stores current oldest age
      currentOldestIndex = i; //stores current oldest index
    }*/
  }
  cout << arr[max].getName() << endl << arr[max].getGender() << endl << arr[max].getAge(); //prints the info of the current oldest sibling using the index
  return 0; //returns 0 to satisfy int main
}