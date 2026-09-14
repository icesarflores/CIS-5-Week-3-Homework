#include <iostream>
#include <string>
using namespace std;

// Homework 3 — Cesar Flores 
// CIS 5 Week 03 · Types & variables
 
int main() {
  const int CURRENT_YEAR = 2026;

  string name = "Cesar Flores";
  //int for age and credits is being used because they are reserved for whole numbers. 
  int age = 49;
  int credits = 12;
  //double is being used for height due the precise decimal placement. I noticed that the trailing zero gets 
  //removed from the output. I read that fixed << setprecision(2) would keep the number in tact. 
  double height_m = 1.70;
  //I had 3.10, but the 0 was being left off as the height_m of 1.70. So I changed it to 3.11 to keep the full decimal output. 
  double gpa = 3.11;
  //char to hold the character 'C' variable. 
  char initial = 'C';
  //bool the output is either 0 or 1. In this case, 1. 
  bool student = 1;

  cout << "=== About Me ===\n";
  cout << "Name: " << name << endl
      << "Age: " << age << endl
      << "Height: " << height_m << "(" << "m" << ")" << endl
      << "Intial: " << initial << endl
      << "Student: " << student << endl
      << "Year: " << CURRENT_YEAR << endl;
  cout << endl;

  cout << "=== About Me as a Student===\n";
  cout << "Name: " << name << endl
      << "Age: " << age << endl
      << "Credits: " << credits << endl
      << "GPA: "  << gpa << endl
      << "Year: " << CURRENT_YEAR << endl;
  
  cout << endl;
  cout << name << " is taking " << credits << " credits in Year " << CURRENT_YEAR << ", " << "with a " << gpa << " gpa." << endl;
  cout << endl;  
  
  
  return 0;
}
