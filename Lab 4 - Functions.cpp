#include <iostream> //For cout, cin, and string datatype

using namespace std; //Standard namespace makes it so we don't have to do std::cout, etc.

char major; //Initializes major as a character
int creds = 0; //Initialzes credits as an integer
string yn = ""; //Intializes yn (for yes/no) as a string
bool startFlag = true; //Initialzes startFlag as a true bool to run a while loop

void graduate() { //Defines a void function called graduate that stores the program
  while (startFlag) { //While true, flag-controlled loop runs until (startFlag == false)
    cout << "Enter the letter for your major: \n(C = Computer Engineering, E = Electrical Engineering , M = Math, S = Computer Science)\n"; //Prompts the user to enter a character that corresponds to their major
    cin >> major; //Stores user character input
    cout << "How many credits have you completed?\n"; //Prompts the user to enter the (whole) number of credits they've completed
    cin >> creds; //Stores the user's credits integer
    switch (major) { //Switch is more efficient than if/else if here because we've prompted the user to input one of four characters while telling to enter them as capital letters
        case 'C': //if (major == 'C'), this code block will be executed.
          cout << "You still need " << 82 - creds << " credits to graduate.\n"; //Prints the number of credits the user has left from 82 using subtraction
          break; //Tells the compiler that if this case is true, move on from the switch.
        case 'E': //if (major == 'E'), this code block will be executed.
          cout << "You still need " << 80 - creds << " credits to graduate.\n"; //Prints the number of credits the user has left from 80 using subtraction
          break; //Tells the compiler that if this case is true, move on from the switch.
        case 'M': //if (major == 'M'), this code block will be executed.
          cout << "You still need " << 85 - creds << " credits to graduate.\n"; //Prints the number of credits the user has left from 85 using subtraction
          break; //Tells the compiler that if this case is true, move on from the switch.
        case 'S': //if (major == 'S'), this code block will be executed.
          cout << "You still need " << 75 - creds << " credits to graduate.\n"; //Prints the number of credits the user has left from 75 using subtraction
          break; //Tells the compiler that if this case is true, move on from the switch.
      }
    cout << "Would you like to keep going?(yes/no)\n"; //Asks the user whether or not they want to keep going, prompting them to enter either "yes" or "no".
    cin >> yn; //Stores the user's yes/no string
    if (yn == "no") { //Checks if the users enters no
      startFlag = false; //If so, makes the startFlag bool false, closing the loop
    }
  }
}

int main() { //Main function that the compiler searches for
  graduate(); //Calls the graduate function
  return 0; //Returns 0 to satisfy that main is an integer
}