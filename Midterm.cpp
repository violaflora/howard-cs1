#include <iostream> //allows user input/output
#include <fstream> //allows for file management

using namespace std; //standard namespace

string isSquare(int a, int b, int c, int d) { //isSquare is a function that returns a string and takes 4 integer arguments
  if (a == b && b == c && c == d) { //checks if all sides are of equivalent length
    return "The shape is a square"; //if so, print that the shape is a square
  }
  else { //if all sides are not equal
    return "The shape is not a square"; //if not, print that the shape is not a square
  }
}

int main() {
  string stuff = ""; //empty string to store extraneous data
  int i, j, k, l = 0; //initializes variables for 4 sides
  ifstream reader; //allows a file to be read
  reader.open("file.txt"); //opens file.txt to be read
  for(int x = 0; x < 3; x++) { //for loop will loop 3 times, used x instead of my regular i because i already initialized i to be used for something else oops
    reader >> stuff >> stuff >> stuff >> i >> stuff >> j >> stuff >> k >> stuff >> l; //stores numbers as variables, extraneous info as "stuff"
    cout << isSquare(i, j, k, l) << endl; //prints return values of function isSquare
  }
  return 0;
}