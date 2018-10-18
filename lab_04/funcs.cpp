/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_04
Program: Functions for the lab

*/

#include <iostream>
#include <string>

std::string box(int width, int height){

	std::cout<<"Box program"<<std::endl;

	std::cout<<"Input width: "<<width<<std::endl;
	std::cout<<"Input height: "<<height<<std::endl;
	std::cout<<'\n';
	std::cout<<"Shape:"<<std::endl;

	std::string shape;

	for(int j=0; j<height; j++){
		for(int i=0; i<width; i++){
			shape+='*';
		}
		shape+='\n';
	}



return shape;
}


// if its divisible by 2 %

std::string checkerboard(int width, int height){

	std::cout<<"Checkerboard program"<<std::endl;

	std::cout<<"Input width: "<<width<<std::endl;
	std::cout<<"Input height: "<<height<<std::endl;
	std::cout<<'\n';
	std::cout<<"Shape:"<<std::endl;

	std::string shape;

	for(int j=0; j<height; j++){
		
		if (j%2==0){
			for(int i=0; i<width; i++){
				if (i%2==0){
					shape+='*';
				}
				else{
					shape+=' ';
				}
			}
		
			shape+='\n';
		}

		else{
			for(int i=0; i<width; i++){
				if (i%2==0){
					shape+=' ';
				}
				else{
					shape+='*';
				}
			}
		
			shape+='\n';
		}
	}

return shape;
}

std::string cross(int size){
	
	std::cout<<"Cross program"<<std::endl;
	std::cout<<"Size "<<size<<std::endl;
	std::cout<<'\n';

	std::cout<<"Shape:"<<std::endl;

	std::string shape="";

	//We got rows and columns	

	for(int row=0; row<size; row++){
		for(int column=0; column<size; column++){
			//std::cout<<column<<std::endl;
			if(row==column){				//Stars are in a diagonal line and that is when row==column
				shape+='*';
			}
			else if((row+column)==(size-1)){  //The other diagonal is when row+column is equal size-1 because we start at 0 so we need size-1.  		
//row == size-column-1
				shape+='*';
			}
			else{
				shape+=' ';
			}
			
		}	
		//After each column ends add a new line
		shape+='\n';	
		
	}

return shape;
}

std::string lower(int length){
	std::cout<<"Lower triangle program"<<std::endl;
	std::cout<<"Input side length "<<length<<std::endl;
	std::cout<<'\n';

	std::cout<<"Shape:"<<std::endl;

	std::string shape="";
	std::string symbols="";

	for (int i=0; i<length; i++){
		symbols+='*';
		shape+=symbols;

		shape+='\n';
		
	/*	for(int j=0; j<length; j++){
			symbols+='*';

			shape+=symbols;
	
			shape+='\n';
		}
*/
	}
	
return shape;
}

std::string upper(int length){
	std::cout<<"Upper triangle program"<<std::endl;
	std::cout<<"Input side length "<<length<<std::endl;
	std::cout<<'\n';

	std::cout<<"Shape:"<<std::endl;

	std::string shape="";
	//std::string symbols (length, '*');
	int number=0;


//	for (int i=0; i<length; i++){
//	
//		std::string symbols;
	for (int i=0; i<length; i++){                     //Runs once first then waits for the next while loop to end
		for (int j=0; j<length; j++){             //This runs until it ends then allows the first for loop to run again
							// Think of it as coordinates
			if (i>j){
				shape+=' ';
			}

			else{
				shape+='*';
			}
/*
			std::string symbols(j, '*');
			//std::string spaces(i, ' ');

			//shape=spaces+shape;
			shape+=symbols;

		
		
			shape+='\n';
*/				

			
		}
	
		shape+='\n';
	}
//	}

			//So for example i is 0 and it is less than say length=5. It would run. j=0 and its less than 5 as well. 0 is not greater than 0, so the shape does not get a space. So, the j loop 					runs again until its to a length of 5 stars. 
			//I becomes 1 and 1>0 so there is a space. This keeps on increasing the spaces, but decreases the symbols as well.

	


return shape;
}

std::string trapezoid(int width, int height){
	std::cout<<"Upside Down Trapezoid Program"<<std::endl;
	std::cout<<"Input width "<<width<<std::endl;
	std::cout<<"Input height "<<height<<std::endl;
	std::cout<<'\n';

	std::string shape="";	

	if(height>(width/2)){
		
		return "Impossible shape!";
	}

	else{


		//First of all the height determines how many lines
		for(int row=0; row<height; row++){  			//This runs until it row=height
			//std::cout<<row<<std::endl;

			//Second we want the stars and spaces. Spaces go first
			for(int spaces=0; spaces<row; spaces++){		//This runs when spaces are less than row. 
															/* For the first run. Spaces=row so it does not run. It waits for row to be equal to 1, then shape gets a ' '. It stops again, because 1<1. Then 																	It will continue to add 0, 1, 2, 3, row spaces.

															*/
				shape+=' ';
			}

			for(int stars=0; stars<width; stars++){			//The width determines how many stars start out on the first line. 
				shape+='*';											
			}
			
			width-=2; 				//Decrement the stars by 2 after every run, so the amount of stars decreases.
			shape+='\n';			//New line after each run, so you get the shape.
		}
	

		



	}

return shape;
}


std::string checkerboard33(int width, int height){
	std::cout<<"Checkboard33 program"<<std::endl;
	std::cout<<"Input width "<<width<<std::endl;
	std::cout<<"Input height "<<height<<std::endl;
	std::cout<<'\n';	

	std::string shape="";

	//The number of rows is determined by the height       
	//The number of numbers and spaces is determined by the width
	//So the pattern repeats ever 6 rows  and pattern repeats every 6 columns
	
	// 0 1 2 3 4 5 the % mod operator will give you these numbers if the numbers continued to 6 7 8 9 10 11
	// Starts at 0, because for loop starts at 0
	//	If the result of % is less than 3, then that is a star. Otherwise it is a space.
	// 	The rows and columns are determined by this pattern

	for(int row=0; row<height; row++){ 			//Row determined by height
		//std::cout<<row<<std::endl;
		
		if((row%6)<3){							//Stars in the beginning if row%6<3 
			for(int column=0; column<width; column++){			//Column determined by width
				if((column%6)<3){						
					shape+='*';
				}
				else{
					shape+=' ';
				}
			

			}

		}

		else{									//Otherwise use spaces if row%6>3
			for(int column=0; column<width; column++){			//Column determined by width
				if((column%6)<3){
					shape+=' ';
				}
				else{
					shape+='*';
				}
			

			}

		}



		shape+='\n';
	}

return shape;	
}


























