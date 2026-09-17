#include <iostream>
#include <string>

// Lab 3 — Alan
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

   
   std::string name = "Alan Lopez";
   int age = 29;
   double height_m = 1.70;
   char initial = 'A';
   bool student = true;

  std::cout << "=== About me ===\n";
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height (m): " << height_m << "\n";
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << student << "\n";
  std::cout << "Year: " << CURRENT_YEAR << "\n";

  return 0;
}
