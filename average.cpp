#include <iostream> //allows input/output 
#include <fstream> //allows file reading/writing

using namespace std; //makes it so we don't have to do std:: for iostream and fstream commands

int main() {
  float sum = 0; //initializes sum
  float num = 0; //initializes count of values
  float stuff = 0; //initializes reader variable
  ifstream reader; //defines reader as an ifstream
  reader.open("file.txt"); //opens file.txt using reader
  while(!reader.eof()) { //eof loop using reader
    reader >> stuff; //stores line in stuff
    sum += stuff; //adds stuff to the sum
    num++; //increases count
  }
  cout << "Average: " << sum/num; //outputs sum divided by count to get average
  ofstream writer; //defines writer as an ofstream
  writer.open("file2.txt"); //opens file.txt using writer
  writer << "Average: " << sum/num; //writes avg to file
}