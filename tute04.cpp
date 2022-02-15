/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);//function declaration
long nCr(int n, int r);

int main() {
  int n, r;//variable declaration
  
  std::cout << "Enter a value for n ";//enter n value
  std::cin >> n;
  std::cout << "Enter a value for r ";//enter r value
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);//calling the function
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)//find the factorial of a no
{
    int i,fact=1;

    while(no >= 1)
    {
        fact = fact * no;
        no--;
    }
    return fact;
}
long nCr(int n, int r)// get the final result
{
    return Factorial(n) / Factorial(n - r);
}
