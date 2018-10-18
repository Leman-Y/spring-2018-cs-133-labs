#include <iostream>

#include "circle_funcs.h"

int main()
{
  std::cout << "This main is the real program\n";
  std::cout << "hello world\n" ; 
  double c;

  c = circ(20);
  std::cout << "Circ is " << c << std::endl;

  return 0;
}

