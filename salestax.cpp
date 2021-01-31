#include <iostream>
using namespace std;

float AddTax(float taxRate, float cost) { //returns the value(float)of cost so that it includes sales tax
  return (cost * taxRate) + cost; // returns total cost

}

int main() {
  float totCost = 0.0;
  float salesTax = 0.10; //percentage value to tax rate
  float grossCost = 20.00; //cost before tax


  totCost = AddTax(salesTax, grossCost);
  cout << "Cost including sales tax: $" << totCost << endl;

  return 0;
}
