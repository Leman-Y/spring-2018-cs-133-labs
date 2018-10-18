/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: lab_01

Input: 3 Numbers
Output: Smallest of the 3 numbers
*/


#include <iostream>
using namespace std;


int main() {
  cout<<"Enter 1st integer"<<endl;
  int integer1=0;
  cin>>integer1;
//  cout<<integer1<<endl;
  
  cout<<"Enter 2nd integer"<<endl;
  int integer2=0;
  cin>>integer2;
//  cout<<integer2<<endl;

  
  cout<<"Enter 3rd integer"<<endl;
  int integer3=0;
  cin>>integer3;
// cout<<integer3<<endl;

if (integer1>integer2)
{
  if (integer2>integer3)
  {
    cout<<integer3<<endl;
  }
  else
  {
    cout<<integer2<<endl;
  }
}

if (integer2>integer1)
{
  if (integer1>integer3)
  {
    cout<<integer3<<endl;
  }
  else
  {
    cout<<integer1<<endl;
  }
}

}
