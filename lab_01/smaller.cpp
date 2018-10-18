/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: lab_01

Input: 2 Numbers
Output: Smallest of the 2 numbers
*/

#include <iostream>
using namespace std;

int main() {
  
  cout<<"Enter the first integer"<<endl;
  int integer1=0;
  cin>>integer1;
  
  //cout<<integer1<<endl;
  
  cout<<"Enter the second integer"<<endl;
  int integer2=0;
  cin>>integer2;
  
  //cout<<integer2<<endl;
  
  if (integer1>integer2)
  {
    cout<<integer2<<endl;
  }
  else 
  {
    cout<<integer1<<endl;
  }
}
