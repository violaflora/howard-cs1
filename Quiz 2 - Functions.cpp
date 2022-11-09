#include <iostream> //Enables cout and cin

using namespace std; //Makes it so that I don't have to put std:: prior to my iostream library commands

int num = 0; //Initializes num as an integer for user input
int sum = 0; //Initiales sum as an integer to be added to

int fiveSum() { //Defines the function fiveSum, return value will be an integer
  cout << "Enter a number (0-9)\n"; //Prompts user to enter a number
  cin >> num; //Stores a user inputted number as "num"
  sum += num; //Adds the inputted number to the sum
  return num; //Returns user inputted num
}

int main() {
  for(int i = 0; i < 5; i++) { //For loop, initializes i as 0, adds 1 each time and goes from 0 to 4 (5 times)
    fiveSum(); //Calls our fiveSum function in the loop, making it ask the user for input five times.
  }
  cout << "Sum: " << sum; //Prints the sum
}