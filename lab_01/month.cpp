/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: lab_01

Input: Year number and month number
Output: Number of days in that month and year
*/


#include <iostream>
using namespace std;

int main() {
  
  std::cout << "Enter a year"<<endl;
  int year=0;
  string typeofyear="";
  
  cin>>year;
//  cout<<year<<endl;
  
if(year%4!=0)
{
  typeofyear="Common year";
}
  else if (year%100!=0)
  {
    typeofyear="Leap year";
  }
  else if (year%400!=0)
  {
    typeofyear="Common year";
  }
  else
  {
    typeofyear="Leap year";
  }

//  cout<<year%4<<endl;

  cout<<"Enter the month number (1-12)"<<endl;
  int month=0;
  cin>>month;
  
//  cout<<month<<endl;


if (month==2 and typeofyear=="Leap year")
  {
    cout<<"29 days"<<endl;
  }
  else if (month==2 and typeofyear=="Common year")
  {
    cout<<"28 days"<<endl;
  }
  else if(month%2!=0)
  {
    cout<<"31 days"<<endl;
  }
  else
  {
    cout<<"30 days"<<endl;
  }

}









