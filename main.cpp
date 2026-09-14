#include <iostream>
#include <string>
using namespace std;

// Homework 3 — Your Name
// CIS 5 Week 03 · Types & variables
 
int main() {
  const int CURRENT_YEAR = 2026;

  string name = "Cesar Flores";
  int age = 49;
  int credits = 12;
  double height_m = 1.70;
  double gpa = 3.1;
  char initial = 'C';
  bool student = 1;

  cout << "=== About Me ===\n";
  cout << "Name: " << name << endl
      << "Age: " << age << endl
      << "Height: " << height_m << "(" << "m" << ")" << endl
      << "Intial: " << initial << endl
      << "Student: " << student << endl
      << "Year: " << CURRENT_YEAR << endl;
  cout << endl;

  cout << "=== About Me ===\n";
  cout << "Name: " << name << endl
      << "Age: " << age << endl
      << "Credits: " << credits << endl
      << "GPA:"  << gpa << endl
      << "Year: " << CURRENT_YEAR << endl;
  
  cout << endl;
  cout << name << " is taking " << credits << " credits in Year " << CURRENT_YEAR << ", " << "with a " << gpa << " gpa." << endl;
  cout << endl;  
  
  
  return 0;
}
