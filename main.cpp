// Name: Ava Hess
// This program calculates and displays business expenses.

#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  std::string location;
  int days;
  double hotel, meal, total;
  std::stringstream sshotel, ssmeal, sstotal;

  //Get information
  std::cout << "Welcome to the Business Trip Tracker! \n";

  std::cout << "What is the business trip location? \n";
  std::getline(std::cin, location);
  location.substr(0, 20);


  std::cout << "How many days will the trip take? \n";
  std::cin >> days;

  std::cout << "What is the total hotel expense? \n";
  std::cin >> hotel;
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;

  std::cout << "What is the total meal expense? \n";
  std::cin >> meal;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal;


  //Calculate total
  total = meal + hotel;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;

  //Show output
  std::cout << "Location " << std::setw(10) << "Days" << "\t" << "Hotel" << "\t" << "Meal" << "\t" << "Total \n";
  std::cout << location << std::setw(7) << days << "\t" << sshotel.str() << "\t" << ssmeal.str() << "\t" << sstotal.str() << std::endl;



  return 0;
}
