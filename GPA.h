//allows GPA_H to be included
#ifndef GPA_H 
#define GPA_H
#include <iostream>
using namespace std;

class GPA {
  private:
  string name;
  float credits;
  float qp;
  float gpa;

  public:
  GPA(); //constructor
  void setName(string newName);
  void setCredits(float newCredits);
  void setQP(float newQP);
  string getName();
  float getGPA();
  float getCredits();
  void addCredits(float newCredits);
  void addQP(float newQP);
  void calculateGPA();
};

#endif