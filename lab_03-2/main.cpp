#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"


int main(){
  
//std::cout<<"Hello"<<std::endl;
std::cout<<"East storage at 01/10/2016 "<<east_storage("01/10/2016")<<std::endl;
std::cout<<"East storage at 12/10/2016 is  "<<east_storage("12/10/2016")<<std::endl;
std::cout<<"East storage at 10/10/2014 is  "<<east_storage("10/10/2014")<<std::endl;
std::cout<<"East storage at 1/10/2017 is  "<<east_storage("1/10/2017")<<std::endl;

std::cout<<'\n'<<std::endl;

std::cout<<mineast()<<std::endl;
std::cout<<maxeast()<<std::endl;


std::cout<<'\n'<<std::endl;

std::cout<<"Compare \n"<<compare("01/05/2016","01/10/2016")<<std::endl;
std::cout<<"Compare \n"<<compare("09/11/2016","09/20/2016")<<std::endl;


std::cout<<"Reverse chronological order \n"<<reverse_order("01/01/2016","01/03/2016")<<std::endl;

std::cout<<"Reverse chronological order \n"<<reverse_order("11/24/2016","12/03/2016")<<std::endl;
  
return 0;
}
