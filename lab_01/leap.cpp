/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: lab_01

Input: Year number
Output: Common year or Leap Year
*/


#include <iostream>
using namespace std;

int main() {
  
  std::cout << "Enter a year"<<endl;
  int year=0;
  cin>>year;
//  cout<<year<<endl;
  
if(year%4!=0)
{
  cout<<"Common year"<<endl;
}
  else if (year%100!=0)
  {
    cout<<"Leap year"<<endl;
  }
  else if (year%400!=0)
  {
    cout<<"Common year"<<endl;
  }
  else
  {
    cout<<"Leap year"<<endl;
  }

//  cout<<year%4<<endl;
  
}
