#include <iostream>
using namespace std;

void zeroBoth(int& var1, int& var2){ //updates memory locations for integers
  var1 = 0;
  var2 = 0;
}

int main() {
  int var1 = 26; //random integers
  int var2 = 12; //random integers

  cout << var1 << " and " << var2 << " became ";

  zeroBoth(var1, var2); // sends integers to function to make equal 0
  cout << var1 << " and " << var2 << endl; // checks variables were updated

  return 0;
}
