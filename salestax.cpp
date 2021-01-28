// Nathan Nguyen
/* Problem 3 (salestax.cpp): Implement a function called addTax. The function addTax has two formal
parameters: taxRate (float), which is the amount of sales tax expressed as a percent; and cost (float),
which is the cost of an item before tax. The function returns the value (float) of cost so that it includes sales tax
*/

#include <iostream>
using namespace std;

// Calculating new cost wiyj Tax
float addTax(float taxRate, float cost){
  taxRate = taxRate / 100;
  float taxRemain = taxRate * cost;
  float newCost = cost + taxRemain;

  return newCost;
}

// Gets inputs and outputs new cost with tax
int main(){
  float itemCost;
  float userTax;

  cout << "Welcome to TAX SIMULATOR!" << endl;
  cout << "Enter the cost of an item: ";
  cin >> itemCost;
  cout << endl << "Enter the amount of tax as a percent:";
  cin >> userTax;

  cout << endl << "COMPUTING TOTAL PRICE TO PAY......" << endl;

  cout << "The total cost would be: " << addTax(userTax, itemCost) << endl;
  cout << "Have a nice day! :D" << endl;

  return 0;
}
