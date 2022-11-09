#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string name = ""; //Initializes the string for user input of name
  ofstream writer; //Creates a new file
  writer.open("file.txt"); //Opens the text file
  cout << "Please enter your full name:\n"; //Prompts user to enter full name
  getline(cin, name); //Gets the entire line of input. As opposed to standard cin, will not stop at spaces
  writer << name; //Writes the contents of name to the txt file
  writer.close(); //Closes the writer function

  ifstream reader; //Looks for file
  reader.open("file.txt"); //Re-opens the text file
  getline(reader, name); //Retrieves each line from the file (there will only be one)
  cout << "Your name is " << name; //Outputs name in the console
  reader.close(); //Re-closes the file
  return 0;
}