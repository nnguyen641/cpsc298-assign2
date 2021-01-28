/* Problem 4 (conversion.cpp): Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
new input values until the user says he or she wants to end the program (user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot. */

#include <iostream>
#include <typeinfo>

using namespace std;

// Get Feet Input
void userInput(string& feet){
  cout << "Enter the number of feet: ";
  cin >> feet;

}
 // Get Inches Input
void userInput2(string& inches){
  cout << "Enter the number of inches: ";
  cin >> inches;
}

// Convert to Meters
float imperialToMeters(int feet, int inches){
  float numFeet = feet + (inches / 12.0);
  // cout << endl << "NUMFEET1: " << numFeet << endl;
  float numMeters = numFeet * 0.3048;

  return numMeters;
}

// Convert to Centimeters
float imperialToCenti(int feet, int inches){
  float numFeet = feet + (inches / 12.0);
  // cout << endl << "NUMFEET2: " << numFeet << endl;
  float numMeters = numFeet * 0.3048;

  float numCenti = numMeters * 100;
  // cout << endl << "NUMCENTI: " << numCenti << endl;

  return numCenti;
}

// Output Conversions
float userOutput(int feet, int inches){
  cout << "Number of meters: " << imperialToMeters(feet, inches) << endl;
  cout << "Number of centimeters: " << imperialToCenti(feet, inches) << endl;
}

//Calls to function and check for exit 
int main(){
  string userFeet;
  string userInches;


  while (true){

    userInput(userFeet);
    if(userFeet == "exit"){
      break;
    }
    userInput2(userInches);
    if(userInches == "exit"){
      break;
    }


    int newFeet = stoi(userFeet);
    int newInches = stoi(userInches);

    userOutput(newFeet, newInches);

  }
}
