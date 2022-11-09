#include <iostream>

using namespace std;

int main() {

  string sent = ""; //empty string to initialize variable data type

  cout << "Enter three words \n"; //prompts user to enter the message

  getline(cin, sent); //reads the string the user entered and stores it as the new value for sent

  cout << "Is this what you said? \n"; //printed message for prompt

  cout << sent; //prints sent

  return 0; //returns 0 to satisfy the compiler given that main is an integer

}