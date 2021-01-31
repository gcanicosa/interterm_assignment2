#include <iostream>
#include <string>
using namespace std;

void GetUserInput(double& feet, double& inches) {
  cout << "Enter feet to convert to meters: ";
  cin >> feet;
  cout << "Enter inches to convert to centimeters: ";
  cin >> inches;

}

void FtInToMCm(double feet, double inches, double& meters, double& centimeters) {
  const double M_PER_FT = 0.3048;

  meters = feet * M_PER_FT; // converting feet to meters
  centimeters = inches * 2.54; //converting inches to centimeters
}

void displayMCm(double feet, double inches, double meters, double centimeters) {
  cout << feet << " ft equals " << meters << " m." << endl;
  cout << inches << " in equals " << centimeters << " cm." << endl;
}

int main() {
  string answer;
  double feet; //user input
  double inches; //user input
  double meters; //converting ft to solve for value
  double centimeters; //converting in to solve for value

  GetUserInput(feet, inches);
  FtInToMCm(feet, inches, meters, centimeters); //updated feet and inches variables from GetUserInput
  displayMCm(feet, inches, meters, centimeters); //updated meters and centimeters variables from FtInToMCm

  cout << "Do you want to repeat the calculation with new data: ";
  cout << "(enter \"exit\" to quit)" << endl;
  cin >> answer;
  while (answer != "exit") { //repeat calculation until user wants to quit
    GetUserInput(feet, inches);
    FtInToMCm(feet, inches, meters, centimeters);
    displayMCm(feet, inches, meters, centimeters);
    cout << "Do you want to repeat the calculation with new data: ";
    cout << "(enter \"exit\" to quit)" << endl;
    cin >> answer;

  }

  return 0;
}
