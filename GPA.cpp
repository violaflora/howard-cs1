#include <iostream> //enables input/output
#include "GPA.h" //includes header file

using namespace std; //standard namespace

GPA::GPA() {
  name = ""; //initializes name as empty string
  credits = 0; //initializes credits as 0
  qp = 0; //initializes QP as 0
  gpa = 0; //initializes GPA as 0
}

void GPA::setName(string newName) {
  name = newName; //sets private variable name to newName
}

string GPA::getName() {
  return name; //returns student name
}



float GPA::getGPA() {
  return gpa; //returns student gpa
}

void GPA::addCredits(float newCredits) {
  credits = newCredits; //sets credits
}

float GPA::getCredits() {
  return credits; //returns student credits
}

void GPA::setQP(float newQP) {
  qp = newQP; //sets private variable to the value of newQP
}

void GPA::addQP(float newQP) {
  qp += newQP; //adds qp to newQP
}

void GPA::calculateGPA() {
  gpa = qp / credits; //sets value of gpa
  //cout << qp << endl << credits << endl << gpa << endl << endl;
}