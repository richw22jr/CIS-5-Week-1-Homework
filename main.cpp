#include <iostream>
#include <string>

// Assignment 1 — Richard Webster

using std::cout;
using std::cin;
using std::string;

int main() {
  string name;
  int years = 0;
  cout << "First name: ";
  cin >> name;
  cout << "Years coding goal: ";
  cin >> years;
  cout << name << " would like to learn enough coding to get an Electrical Engineering degree in ("<< years << ") years\n";
  return 0;
}
