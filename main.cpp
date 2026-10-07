#include <iostream>
using namespace std;

int main()
{

  cout << "==============================\n"
       << endl;
  cout << "      DYNAMIC CALCULATOR      \n"
       << endl;
  cout << "==============================\n"
       << endl;

  float num1;
  float num2;
  char operation;

  cout << "Enter Number 1: " << endl;
  cin >> num1;

  cout << "Enter Number 2: " << endl;
  cin >> num2;

  cout << "Enter the operation you want to perform: " << endl;
  cin >> operation;

  if (operation == '+')
  {
    cout << "The Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    cout << "\n\n========================================\n";
    cout << "       Calculation Successful!\n";
    cout << "  Thank you for using Dynamic Calculator.\n";
    cout << "========================================\n";
  }

  else if (operation == '-')
  {
    cout << "The Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
    cout << "\n\n========================================\n";
    cout << "       Calculation Successful!\n";
    cout << "  Thank you for using Dynamic Calculator.\n";
    cout << "========================================\n";
  }

  else if (operation == '*')
  {
    cout << "The Multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
    cout << "\n\n========================================\n";
    cout << "       Calculation Successful!\n";
    cout << "  Thank you for using Dynamic Calculator.\n";
    cout << "========================================\n";
  }

  else if (operation == '/' && num2 == 0)
  {
    cout << "Error! Cannot divide by zero." << endl;
  }

  else if (operation == '/')
  {
    cout << "The Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
    cout << "\n\n========================================\n";
    cout << "       Calculation Successful!\n";
    cout << "  Thank you for using Dynamic Calculator.\n";
    cout << "========================================\n";
  }

  else
  {
    cout << "Error! Invalid operation." << endl;
  }

  return 0;
}