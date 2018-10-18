/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2D
Program: Prints out fibonacci numbers until the 47th fibonacci number

DISCLAIMER:: MY FIBONACCI NUMBERS HAVE RANDOM NEGATIVE NUMBERS AROUND THE END BECAUSE THE NUMBER IS TOO BIG FOR THE COMPILIER TO HANDLE. BYTE SIZE IS NOT ENOUGH. I DONT KNOW.

*/


#include <iostream>

int main() {
  // make an array
  int fib[60];
  // first two terms are given
  fib[0] = 0;
  fib[1] = 1;
  // and all the following ones can be computed iteratively as
  std::cout<<fib[0]<<std::endl;
  std::cout<<fib[1]<<std::endl;
  
  for (long int i=2; i<60; i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
    
    std::cout<<fib[i]<<std::endl;
  }
/*
  for (int i=1;i<10; i++)
  {
    std::cout<<i<<std::endl;
  }
*/

/*
    The program stops representing the right number after the 46th number because int doesnt have enough bits to handle the size of the number. The 46th number is :1836311903. It is an integer overflow. 

*/
  
}
