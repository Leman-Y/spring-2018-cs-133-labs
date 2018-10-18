/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2B
Program: Asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range 

*/

#include <iostream> 

int main()
{
  
 int a=0;
 int b=0;
 int c=-10;
 int d=15;
 
 for (int i=c; i<d; i++){
   std::cout<<i<<' ';
 }
 std::cout<<'\n'<<std::endl;
 
 std::cout<<"Insert your first integer (Lower limit)"<<std::endl;
 std::cin>>a;
 
 std::cout<<"Insert your second integer (Upper limit)"<<std::endl;
 std::cin>>b;
  
  for(int i = a; i < b; i++) {
    // the body of the loop will get executed for 
    // all values of i starting at L
    // and ending at the largest integer less than U
    std::cout<<i<<' ';
  }
  
}
