/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2C
Program: Creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:
*/


#include <iostream>

int main() {
  
  int array[10];
  for(int i=0; i<10;i++){
    array[i]=-1;
    std::cout<<array[i]<<' ';
  }
  
  std::cout<<'\n';
  
  array[0]=50;
  array[2]=23;
  array[3]=100;
  array[6]=500;
  array[8]=-500;
  array[1]=132;
  array[5]=5000;
  array[9]=9999;
  
  for(int i=0; i<10; i++){
    std::cout<<array[i]<<' ';
  }
  
  std::cout<<'\n';
  
  int myData[10]; 
  
  for(int i=0 ; i<10 ; i++){
    myData[i]=1;
  //  std::cout << myData[i]<<' '; 
  }
  
  std::cout<<std::endl;
  /*
  std::cout<<myData[0]<<std::endl;
    std::cout<<myData[1]<<std::endl;
  std::cout<<myData[2]<<std::endl;
  std::cout<<myData[9]<<std::endl;
  std::cout<<myData[10]<<std::endl;
*/
  

  int cell_index;
  int cell_value;
  
  do {
    
    for(int i=0 ; i<10 ; i++){
      std::cout << myData[i]<<' '; 
    }
    
    std::cout<<std::endl;
    
    std::cout<<"Insert cell index"<<std::endl;
    std::cin>>cell_index;
    
    std::cout<<"Insert cell index value"<<std::endl;
    std::cin>>cell_value;
    
    myData[cell_index]=cell_value;
    
    //std::cout<< cell_index << std::endl;
    } while (0<=cell_index && cell_index < 10);
    
   std::cout << "Index out of range. Exit." << std::endl;    
   return 0;
  
}
