/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_03
Program: Functions for the lab

DISCLAIMER: You need to do g++ -std=c++11 funcs.cpp if it doesn't work, because it didn't work on my laptop. I think my laptop runs on an older version.
*/
#include "doctest.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

	using namespace std;

double east_storage(std::string yourdate){  //Input the date you want
	  double eastSt;
	  double eastEl;
	  double westSt;
	  double westEl;
	//double zero=0.0;
          std::string date;

	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	   std::cerr << "File cannot be opened for reading." <<std::endl;
	   std::exit(1); // exit if failed to open the file
	}

	  std::string junk;
	  getline(fin,junk);

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		
		if(yourdate==date){
		
                return eastSt;
		}
		
	}

	fin.close();


return 0.0;
}

double mineast(){
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;
	std::string date;

	double minimum=0;
	double x=east_storage("01/01/2016"); 		//We are going to input the eastst values into x and y. Then compare x and y to get the minimum value.
	
	//x will be the minimum value;
	double y=0;

	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	   std::cerr << "File cannot be opened for reading." <<std::endl;
	   std::exit(1); // exit if failed to open the file
	}

	  std::string junk;
	  getline(fin,junk);

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		if(eastSt<x){
			x=eastSt;
		}
		
	}

	fin.close();

	//	std::cout<<"Minimum value is ";
	


return x;
}

double maxeast(){
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;
	std::string date;

	double maximum=east_storage("01/01/2016"); 		//We are going to input the eastst values into x and y. Then compare x and y to get the maximum value.
	
	//maximum will be the maximum number at eastst
	double y=0;

	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	   std::cerr << "File cannot be opened for reading." <<std::endl;
	   std::exit(1); // exit if failed to open the file
	}

	  std::string junk;
	  getline(fin,junk);

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		if(eastSt>maximum){
			maximum=eastSt;
		}
		
	}

	fin.close();

	std::cout<<"Maximum value is ";

return maximum;
}


std::string compare(std::string first_date, std::string second_date){

	//For some reason if the year is out of the list, it does not matter. What matters if only the month and date in this program. Years that are not 2016 still get their records as their output but only for the days and months of 2015.	

	  double eastSt;
	  double eastEl;
	  double westSt;
	  double westEl;
	//double zero=0.0;
          std::string date;

	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	   std::cerr << "File cannot be opened for reading." <<std::endl;
	   std::exit(1); // exit if failed to open the file
	}

	  std::string junk;
	  getline(fin,junk);

	std::string ans = ""; 

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		
		if((date>=first_date) && (date<=second_date)){  //this gives you the range. No matter if the first date is the beg or end? right? 
			ans+=date + ' ';  //Add the date first then a space. Then you add East, West, and Equal. Then add '\n'

			if (eastEl>westEl){
				ans+="East";

			}
			else if (westEl>eastEl){
				ans+="West";

			}
			
			else{
				ans+="Equal";
			}

		ans+="\n";  //new line

               // std::cout<<date<<eastSt<<eastEl<<westSt<<westEl<<std::endl;
		}
	/*
		if (date==first_date){          //This if statement is run one line at a time
		std::cout<<date<<eastSt<<eastEl<<westSt<<westEl<<std::endl;  
		}
	*/
		}

			

	

	fin.close();


return ans;                   //Doesn't work if the date is std::cout<<compare1("12/30/2016","01/05/2016")<<std::endl; other than ("01/05/2016","12/30/2016"), year is outside of 2016.
}

std::string reverse_order(std::string first_date, std::string second_date){
	  double eastSt;
	  double eastEl;
	  double westSt;
	  double westEl;

          std::string date;

	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
	   std::cerr << "File cannot be opened for reading." <<std::endl;
	   std::exit(1); // exit if failed to open the file
	}

	  std::string junk;
	  getline(fin,junk);

	int counter=0;
/*
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		
		if (date>= first_date && date<=second_date){	
			counter+=1;

		}
	}

	int array[counter];
*/

//^^^^^ messing me up cuz the while loop already read the file. so i gotta comment this out

	std::string ans="";

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	    // this loop reads the file line-by-line
	    // extracting 5 values on each iteration 

	    // for example, to print the date and East basin storage:

	//  std::cout << date << " " << eastSt << std::endl;
		
		if (date>= first_date && date<=second_date){	
			ans= date + ' ' + std::to_string(westEl) + '\n' + ans;  //Put the info before the string, so as you put in more data. Thay becomes first.

		}
	}
	
			/*
				I wanted to make a counter and use that counter to see how many days are in the interval. With the counter, I make an array. With this array I can put the dates and values 					in however, I can't put strings into an array index's value. I was got to read the array backwards, so I get reverse chronological order.
			*/
	fin.close();
	
//	std::cout<<counter<<std::endl;	

return ans;
}




TEST_CASE("Testing east_storage"){
  CHECK(east_storage("12/16/2016")==52.17);
  CHECK(east_storage("01/01/2016")==71.99);
  CHECK(east_storage("01/02/2016")==0);
}

TEST_CASE("Testing mineast"){
  CHECK(mineast()==49.34);
  CHECK(mineast()==0);
}

TEST_CASE("Testing maxeast"){
  CHECK(maxeast()==81);
  CHECK(maxeast()==0);
}

TEST_CASE("Testing compare"){
  CHECK(compare("11/16/2016","11/17/2016") ==  "11/16/2016 East\n11/17/2016 East\n");
}
/*
TEST_CASE("Testing reverse"){
  CHECK(reverseorder("05/29/2016","05/29/2016") == "");
}

*/






