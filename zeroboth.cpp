// Nathan Nguyen
/* Problem 2 (zeroboth.cpp): Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0. */

#include <iostream>
using namespace std;

// Function to "zero" any number
void zeroBoth(int& value1, int& value2){
  value1 = 0;
  value2 = 0;
}

int main(){
  // Declare variables
  int num1;
  int num2;

  // Asking user for numbers
  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << endl << "Enter second number: " << endl;
  cin >> num2;
  cout << endl;

  // Making the numbers zero
  zeroBoth(num1, num2);

  // Outputting the numbers as zeroes
  cout << "Your first number becomes: " << num1 << endl;
  cout << "Your second number becomes: " << num2 << endl;

  return 0;

}
