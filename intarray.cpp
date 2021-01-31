#include <iostream>
using namespace std;

int main() {
  int numberArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //declare + initialize array
  int i;

  cout << "Original array: ";
  for (i = 0; i < 10; ++i) { //read array elements
    cout << numberArray[i] << " "; //print array elements
  }
  cout << endl;

  cout << "Enter new array elements: ";
  for (i = 0; i < 10; ++i) {
    cin >> numberArray[i]; // overwrite array elements
  }

  cout << "New array: ";
  for (i = 0; i < 10; ++i) { //read array elements
    cout << numberArray[i] << " "; //print array elements
  }

  cout << endl;
  return 0;
}
