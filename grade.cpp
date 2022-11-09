#include <iostream> //allows input/output
#include <fstream> //allows file input/output

using namespace std; //standard namespace

char assessmentType; //stores first character in each line of grades.txt
double assignment[7], lab[7], quiz[7]; //initializes empty arrays for grades
int assignmentIndex, labIndex, quizIndex = 0; //Initializes counters for indexes of grade arrays
float practiceMidterm, midtermGrade, finalGrade, avg = 0; //initialies floats for assessment types there are only one of
float assignmentSum, labSum, quizSum = 0; //Initializes sums of arrays

float avgGrade(float sum, float num, float pts) { //average grade takes the sum of an array, divides it by the number of elements and multiplies it by possible points and returns a float
  return (sum/(num*pts))*100; //returns calculation
}

float currentGrade(float labs, float quizzes, float assignments, float midterm, float fin) { //current grade weighs categories by percentages and returns a float
  return (labs * .2) + (quizzes * .05) + (assignments * 0) + (midterm * .35) + (fin * .4); //returns the current grade
}

int main() {
  ifstream r("grades.txt"); //opens grades.txt to be read
  while (r) { //until the end of file
    r >> assessmentType; // reads the type of assessment the grade belongs to
    switch (assessmentType) { //to account for the 5 different letter categories, switch has faster runtime than elif and this is its exact use case
      case 'A': //if (assessmentType == 'A')
        r >> assignment[assignmentIndex]; //reads number next to assignment letter and stores it in array
        assignmentSum += assignment[assignmentIndex]; //adds value the array sum for assignment
        assignmentIndex++; //adds one to the index to move along in storing values to the array
        break; //formatting to move onto next case after this line
      case 'L': //if (assessmentType == 'L')
        r >> lab[labIndex]; //reads number next to lab letter and stores it in array
        labSum += lab[labIndex]; //adds value to array sum
        labIndex++; //adds one to the index to move along in storing values to the array
        break; //formatting to move onto next case after this line
      case 'Q': //if (assessmentType == 'Q')
        r >> quiz[quizIndex]; //reads number next to quiz letter and stores it in array
        quizSum += quiz[quizIndex]; //adds value to quiz sum
        quizIndex++; //adds one to the index to move along in storing values to the array
        break; //formatting to move onto next case after this line
      case 'P': //if (assessmentType == 'Q')
        r >> practiceMidterm; //reads number next to practice midterm letter and stores as a float
        lab[labIndex] = practiceMidterm / 5; //divides practice midterm to make it out of 20 and store it as a lab grade
        labSum += lab[labIndex]; //adds value to lab sum
        labIndex++; //adds one to the index to move along in storing values to the array
        break; //formatting to move onto next case after this line
      case 'M': //reads number next to midterm letter and stores it as a float
        r >> midtermGrade; //reads number next to midterm letter and stores as a float
        break; //formatting to move onto next case after this line
    }
  }
  r.close(); //closes file

  float labGrade = avgGrade(labSum, labIndex, 20); //stores average grade for lab as a variable as it needs to be used twice
  float quizGrade = avgGrade(quizSum, quizIndex, 10); //stores average grade for quiz as a variable as it needs to be used twice
  float assignmentGrade = avgGrade(assignmentSum, assignmentIndex, 20); //stores average grade for assignments as a variable as it needs to be used twice
  
  
  cout << "Enter a grade for the final \n"; //prompts user to enter final grade
  cin >> finalGrade; //stores final grade as float
  cout << "Labs: " << labGrade << endl; //prints lab grade
  cout << "Quizzes: " << quizGrade << endl; //prints quiz grade
  cout << "Assignments: " << assignmentGrade << endl; //prints assignment grade
  cout << "Midterm Exam: " << midtermGrade << endl; //prints midterm grade
  cout << "Final Exam: " << finalGrade << endl; //prints final grade
  cout << "Current Grade: " << currentGrade(labGrade, quizGrade, assignmentGrade, midtermGrade, finalGrade); //prints current grade
    
  return 0; //returns 0 for main
}