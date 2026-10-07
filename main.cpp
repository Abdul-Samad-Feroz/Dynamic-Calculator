#include <iostream>
using namespace std;

int main()
{

  printf("==============================\n");
  printf("      DYNAMIC CALCULATOR      \n");
  printf("==============================\n");

  int num1;
  int num2;
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
    cout << "\n========================================\n";
cout << "       Calculation Successful!\n";
cout << "  Thank you for using Dynamic Calculator.\n";
cout << "========================================\n";
  }

  else if (operation == '-')
  {
    cout << "The Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
  }

  else if (operation == '*')
  {
    cout << "The Multplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
  }

  else if (operation == '/')
  {
    cout << "The Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
  }

  else
  {
    cout << "Error!" << endl;
  }

  return 0;
}