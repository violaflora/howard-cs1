#include <iostream> // allows user input and output
#include <fstream> // allows file input and output

using namespace std; // using standard namespace, io and fstream commands won't need std::

void phone (string &a, string &b, string &c, ifstream &r) {
  r >> a >> b >> c;
}

int main () {
  string area; // initialzes string for area code
  string second; // initialzes string for second part of number
  string third; // initialzes string for third part of number
  ifstream r; // opens an input file stream called r to read
  r.open("phone.txt"); // opens file txt
  ofstream w; // opens an output file stream called w to write
  w.open("area_code.txt"); // opens (creates) area_code.txt
  for(int i = 0; i < 5; i++) { // loops 5 times (once for each number)
    phone(area, second, third, r); // runs phone function for the variables in main
    if (area == "202") { //if the area code is 202...
      w << "(" << area << ") " << second << "-" << third << " (DC)" << endl; // write the phone number in correct format to file with DC label
      cout << "(" << area << ") " << second << "-" << third << " (DC)" << endl; // cout the phone number in correct format with DC label
    }
    else if (area == "240") { //if the area code is 240...
      w << "(" << area << ") " << second << "-" << third << " (MD)" << endl; // write the phone number in correct format to file with MD label
      cout << "(" << area << ") " << second << "-" << third << " (MD)" << endl; // cout the phone number in correct format with MD label
    }
  }
  return 0; // to satisfy. compiler
}