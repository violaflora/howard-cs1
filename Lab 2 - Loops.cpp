#include <iostream>
using namespace std;

int main() {
  float num = 0; //Initializes the integer for user input

  for (int i = 0; i < 3; i++) { //This loop will run 3 times because i starts as 0 and i++ is at the end of the block
    cout << "Enter a number (0-999)\n"; // Prompts user to enter a number within the parameters
    cin >> num; //Stores the user's input as num
    if (num < 0 || num > 999) { //Determines if the input is outside the range using the or operator
      cout << "Is this a number?\n\n"; //Prints an error message if the input is outside the range, line break before the next loop
    }
    else if (num <= 10) { //Determines if the input is less than or equal to 10
      cout << "This is a small number\n\n"; //Prints the input is small
    }
    else if (num > 10 && num < 100) { //Determines if the input is between 10 and 100 exclusive
      cout << "This is a number\n\n"; //Prints if the input is a medium-sized number
    }
    else if (num >= 100 && num <= 999) { //Determines if the input is between 100 and 999 inclusive
      cout << "This is a big number\n\n"; //Prints if the input is big
    }
  }
  return 0; //Returns 0 because main is an integer
}