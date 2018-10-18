/*
Name: Leman Yan 
Instructor: Mike Zamansky
Course: CS-133
Lab: 12

Recursive Functions
*/


#include <iostream>
#include <cmath>


using namespace std;

//TASK A
void printRange(int left, int right){

	if( left <= right){
		cout<<left<<' ';

		printRange( left+1 , right);

	}


	else{

	}
	//cout<<endl;
}


//TASK B
int sumRange(int left, int right){
	//int sum=0; The variable doesnt save the previous functions sum so if it was 1,3 which is 6. It would be 1,2,3. Not 1 , 3, 6
	if(left < right){
		//sum+=left;
		//cout<<sum<<endl;
		return left + sumRange( left+1, right);	//Return left and increase left by 1 and then return that left and so forth until left is equal to right
	}

	//return sum;


}


//TASK C

int sumArrayInRange(int *arr, int left, int right){
	if( left < right){
		cout<<arr[right]<<endl;
		return arr[right];
	}

}


int sumArray(int *arr, int size){

	if( size > 1 ){
		return arr[size-1] + sumArray( arr , size-1) ;
	}
	else{
		return arr[0];
	}

}

//TASK D
/*
which returns true if all characters in the string are letters and digits, otherwise returns false.

A usage example:

cout << isAlphanumeric("ABCD") << endl;        // true (1)
cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
The logic is similar to the sumRange function:

if the sting is empty, return =true=.
*Otherwise,*
check the first character, and
check that the rest of the string is alphanumeric.
*/

bool isAlphanumeric(string s){
	if( s.length() > 0 ){
		if( isalnum(s[ s.length()-1] )){
			//cout<<"is alnum"<<endl;
			return isAlphanumeric( s.substr(0 , s.length()-1 ) );

		}
		else{
			return 0;
		}

	}
	else{
		return 1;

	}

}



//TASK E
/*

which returns true if the string is a sequence of nested parentheses:

Strings =”“=, =”()”=, =”(())”=, =”((()))”= … are all correct sequences and should return true. Any other symbols or mismatching parenthesis should make the function return false.

A usage example:

cout << nestedParens("((()))") << endl;      // true (1)
cout << nestedParens("()") << endl;          // true (1)
cout << nestedParens("") << endl;            // true (1)

cout << nestedParens("(((") << endl;         // false (0)
cout << nestedParens("(()") << endl;         // false (0)
cout << nestedParens(")(") << endl;          // false (0)
cout << nestedParens("a(b)c") << endl;       // false (0)
*/

bool nestedParens(string s){
	/*
	if( s.length() > 2){
		if( ( s[0] == '(' ) && (s[s.length()-1] == ')') ){


		}
	}
	else if(s.length() == 1 ){
		return false;
	}
	else{
		return true;
	}
	*/	

	if(s.length() == 0){		//Base case: If its an empty string then return true
		return true;

	}


	else if( s.length()%2 == 0 ){ 	//If its even
		if( ( s[0] =='(' ) && (s[s.length()-1] == ')')  ){
			return nestedParens( s.substr( 1 , s.length()-2 ) );
	
		}
		

	}
	else{						//If its odd then there is going to be a parentheses that isnt matched with another one
		return false;
	}



}


//TASK F
/*
which returns true if the collection is divisible, and false otherwise. The prices are provided in the array prices, and size is the number of items in the array.

Your function should not allocate new memory dynamically. Pass the same array data into recursive function calls. If you need more variables such as left and right boundary variables, or the amounts that should be given to Alice and Bob, make a helper function with any necessary extra variables.
*/

//For example 7 9 2 2 , the sum is 20 but you cant divide it evenly into two seperate groups for people
//Helper function

bool helper(int sumOne, int sumTwo, int size, int*prices  ){

	if( sumOne == 0 && sumTwo==0){
		return 1;
	}
	
	else if( (size==0) && (sumOne != 0 ) && (sumTwo != 0)   ){		//If the sums are not equal to zero when the size is zero, then you cant split the array evenly

		return 0;

	}
	
	else{
		return( helper(sumOne-prices[size-1], sumTwo ,size-1, prices ) || helper(sumOne , sumTwo - prices[size-1] , size-1, prices) );
	}
}

bool divisible(int *prices, int size){

	int sumOne=sumArray(prices , size)/2;	//Sum of first person
	int sumTwo=sumArray(prices , size)/2;	//Sum of second person
	
	if( sumArray( prices, size ) % 2 == 1 ){	//You cannot divide an odd number evenly into two groups
		return 0; 					
	} 
	
	else{
		return helper(sumOne , sumTwo , size , prices);    

	}

}




















