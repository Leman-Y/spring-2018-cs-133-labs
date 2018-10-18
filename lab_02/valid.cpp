/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2A
Program: After a valid value is obtained, print this number n squared.

DISCLAIMER:: FOR SOME REASON YOU NEED TO DO g++ -std=c++0x valid.cpp in order to run my program


*/

//Self: read this http://www.cplusplus.com/reference/string/string/getline/

#include <iostream>
#include <string>
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//Use isdigit for each character in the string to see if its a digit. If isdigit works for all the characters then use that string or else do a feedback loop until the user inputs a number
//Coulnd't do if(stoi==true)

int main(){
  
  std::string empty="0";
  int integer;
  int number;
  //int integer=stoi(empty);
  
  std::cout<<"Please Input an integer between 0<integer<100"<<std::endl;
  //std::cout<<"\n"<<std::endl;
  std::cout<<"If the output is 0, that means type again"<<std::endl;
  
  std::cin>>integer;
  //std::cout<<integer<<std::endl;
  while (!std::cin.good())
  {
      std::cin.clear();
      std::cin.ignore(INT8_MAX, '\n');
      
      std::cin>>integer;
      //std::cout<<integer<<std::endl;
      //ask again
  }

  while(true){
    
    
    if (integer>0 && integer<100){
      
      std::cout<<integer*integer<<std::endl;  

      break;
    }
    else{std::cout<<"Please Input an integer between 0<integer<100"<<std::endl;}
    {
      std::cin>>integer;
        while (!std::cin.good())
       {
      std::cin.clear();
      std::cin.ignore(INT8_MAX, '\n');
      
      std::cin>>integer;

      //ask again
      }
      
    }
    
  }
  


/*
  while(true){
    std::cout<<"Input an integer between 0<integer<100"<<std::endl;

    std::getline (std::cin,empty);
    
    if (stoi(empty) ==true){
      integer=stoi(empty);
      std::cout<<integer<<std::endl;
      
      break;  
    }
    
    
  }
*/  
  
/*
  while(true){
    std::cout<<"Input an integer between 0<integer<100"<<std::endl;
    
    std::getline (std::cin,empty);
    
    std::cout<<std::endl;
    int integer=stoi(empty);
    
    if (integer>0 && integer<100){
      
      std::cout<<integer*integer<<std::endl;  

      break;
    }
    else{std::cout<<"Please Input an integer between 0<integer<100"<<std::endl;}
    {
      std::getline (std::cin,empty);
    }
    
  }
  
*/  

    return 0;
}


/*

    string number = "apple";
    string str3 = "31337 geek";
    cin>>number;
    
    cout<<number<<endl;
    
    int integer = stoi(number);
    
    cout<<integer<<endl;
    
    //int integer = stoi(number);
    int myint3 = stoi(str3);
    

    //cout<<integer<<endl;
    cout<<myint3<<endl;
    
    
    */
    
    
    
