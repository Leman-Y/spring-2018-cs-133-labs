#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>



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


int main(){
//std::cout<<"Hello"<<std::endl;
std::cout<<east_storage("01/10/2016")<<std::endl;
std::cout<<east_storage("02/10/2016")<<std::endl;
std::cout<<east_storage("10/10/2016")<<std::endl;
std::cout<<"East storage at 1/10/2017 is  "<<east_storage("1/10/2017")<<std::endl;


return 0;
}
