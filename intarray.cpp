// Nathan Nguyen
/* Problem 1 (intarray.cpp): Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write/print the integers back to the screen (console output). For this exercise
you need not use any functions. */

#include <iostream>
using namespace std;

int main(){
  // Declaring Variables & Arrays
  int numberArray[10];
  int userInput;
  int count;

  // Asking for user input
  cout << "Enter up to 10 nonnegative numbers (enter a negative to stop early): " << endl;

  // Loop to check for negative numbers and put user's input in array if valid
  for (int i = 0; i < 10; ++i){
    cin >> userInput;
    if (userInput < 0){
      cout << "The program has stopped receiving numbers." << endl;
      break;
    } else {
      numberArray[i] = userInput;
      count += 1;
    }
  }

  // Outputting user's numberlist to console
  cout << "Your number list: ";
  for (int i = 0; i < count; ++i){
    cout << numberArray[i] << ", ";
  }

  cout << endl;

  return 0;
}
