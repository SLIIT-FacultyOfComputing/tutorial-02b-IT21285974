/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main()
{
    int no;//declare variables
    long fac;

    std::cout<<"Enter a number: ";//enter the no
    std::cin>>no;

    fac = 1;
    for (int r=no; r >= 1; r--) {//find the factorial of the no
        fac = fac * r;
    }

    std::cout<<"Factorial of "<<no<<" is "<<fac<<std::endl;//display the factorial
  
    return 0;
}
