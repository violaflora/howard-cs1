#include <iostream> //allows user input and output
#include <fstream> //allows file reading and writing
#include "GPA.h" //includes header file so that GPA class can be used

using namespace std; //standard namespace

int gp(char grade) { //function header and defintion for gp, takes grade as a paramater
  int gpVal = 0; //initlaizes gp
  switch (grade) { //checks value of char grade
    case 'A': //if char is A
      gpVal = 4; //gp is 4
      break;
    case 'B': //if char is B
      gpVal = 3; //gp is 3
      break;
    case 'C': //if char is C
      gpVal = 2; //gp is 2
      break;
    case 'D': //if char is D
      gpVal = 1; //gp is 1
      break;
    case 'F': //if char is F
      gpVal = 0; //gp is 0
      break;
  }
  return gpVal; //return gp value
}

int main () {
  
  string stuff = ""; //empty var for string data
  int stuffInt = 0; //empty var for int data
  char stuffChar; //empty var for char data
  int numCourses = 0; //number of courses for nested loop
  int gradePoints = 0; //placeholder for grade points in main
  int gpProduct = 0; //product of grade points
  int totalCredits = 0;
  int totalGP = 0;
  GPA arr[3]; //array of GPA objects, len = 3
  ifstream r; //input file stream named reader
  r.open("file.txt"); //opens file.txt
  
  for (int i = 0; i < 3; i++) { //loops 3 times as there are 3 students
    r >> stuff; //reads first line which is name
    arr[i].setName(stuff); //sets name in array
    r >> stuff >> stuff >> numCourses; //reads up to number of courses
    
    for (int j = 0; j < numCourses; j++) { //uses number of courses in for loop
      r >> stuff >> stuff >> stuff >> stuffInt >> stuff >> stuffChar; //reads credits and grade to do various calculations
      arr[i].addCredits(stuffInt); //stores credits
      totalGP += gp(stuffChar) * stuffInt; //stores grade points in variable using gp function
      totalCredits += stuffInt;
    }
    //cout << arr[i].getCredits();
    arr[i].setQP(totalGP); //stores quality points as product of credits and grade points
    arr[i].addCredits(totalCredits); //adds the total c
    arr[i].calculateGPA(); //uses grade points and credit data to calculate gpa
    cout << arr[i].getName() << endl << arr[i].getGPA() << endl << endl; //prints name and gpa to terminal
    totalGP = 0; //resets grade points to 0 for the next student
    totalCredits = 0; //resets credits to 0 for the next student
  }
  
  return 0; //returns 0 to satisfy int main
  
}
