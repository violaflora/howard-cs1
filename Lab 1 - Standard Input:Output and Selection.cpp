#include <iostream> //Allows the iostream library to be used

using namespace std; //Uses the standard namespace to avoid having to specify it every time

int main (){

  int temp = 0; //Initializes the temperature variable so the compiler does not randomly assign it

  cout << "Enter the temperature(0-120) \n"; //Prompts the user to enter a temperature

  cin >> temp; //Takes the user's temp input

  if ((temp < 0) or (temp > 120)) { //Checks if the temperature is outside the range of 0-120
    
    cout << "Temperature is out of range"; //If the temperature is outside the range, this message will be printed
    
    }
  
  else if ((temp >= 0) and (temp <= 49)) { //Checks if the temperature is between 0 and 49

    cout << "You should go skiing"; //If the temperature is in range, this message will be printed
    
  }
    
  else if ((temp >= 50) and (temp <= 70)) { //Checks if the temperature is between 50 and 70

    cout << "You should go biking"; //If the temperature is in range, this message will be printed
  
  }

  else if ((temp >= 70) and (temp <= 120)) { //Checks if the temperature is between 70 and 120
    
    cout << "You should go swimming"; //If the temperature is in range, this message will be printed
    
  }

  return 0; //Returns 0 to satisfy the compiler

}