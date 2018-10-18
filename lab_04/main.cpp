#include <iostream>

#include "funcs.h"

int main(){

std::cout<<box(5, 3)<<std::endl;
std::cout<<box(2, 2)<<std::endl;
std::cout<<box(0, 1)<<std::endl;

std::cout<<checkerboard(5,6)<<std::endl;
std::cout<<checkerboard(11,6)<<std::endl;

std::cout<<cross(0)<<std::endl;
std::cout<<cross(3)<<std::endl;
std::cout<<cross(8)<<std::endl;

std::cout<<lower(0)<<std::endl;
std::cout<<lower(1)<<std::endl;
std::cout<<lower(5)<<std::endl;

//std::cout<<std::string (5, '*')<<std::endl;

std::cout<<upper(0)<<std::endl;
std::cout<<upper(1)<<std::endl;
std::cout<<upper(4)<<std::endl;

std::cout<<trapezoid(12,7)<<std::endl;
std::cout<<std::endl;
std::cout<<trapezoid(12,5)<<std::endl;
std::cout<<trapezoid(6,3)<<std::endl;

std::cout<<checkerboard33(4,5)<<std::endl;
std::cout<<checkerboard33(16,11)<<std::endl;
std::cout<<checkerboard33(27,27)<<std::endl;

/*
std::cout<<(1/3)%2<<std::endl;
std::cout<<(1/3)<<std::endl;
std::cout<<(1%2)<<std::endl;
std::cout<<(3%2)<<std::endl;
std::cout<<(2%2)<<std::endl;
std::cout<<(1%2)<<std::endl;
*/
}
