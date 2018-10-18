/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_05
Program: Functions for the lab

*/

#include <iostream> 
#include <cmath>
#include <string>

using namespace std;

bool isDivisibleBy(int n, int d){
	//n is first number, d is second number
	//cout<<n<<'/'<<d<<endl;

	if(n%d==0){
		return true;
	}
	else{

		return false;
	}
}

bool isPrime(int n){
	
	int factors=0;

	if(n<=1){
		return false;
	}
	
	for(int i=(n-1); i>1 ; i-=1){
		int factors=0;
		//cout<<i<<endl;
	
		if(n%i==0){
			factors+=1;
		}

		if(factors>0){
			return false;
		}
	}

	return true;

	//cout<<factors<<endl;
}

int nextPrime(int n){
	
	for(int nextnumbers=n+1 ; nextnumbers>n; nextnumbers++){
		if(isPrime(nextnumbers)==1){
			return nextnumbers;
		}
	
		
	}

}

int countPrimes(int a, int b){
	int counter=0;
	for(int number=a ; number<=b ; number++){
		//cout<<number<<endl;
		if(isPrime(number)==1){
			counter+=1;
		}
	}
	return counter;
	//int number is the first number a

}

bool isTwinPrime(int n){
	/*	n initially has to be a prime number so check that first and change your program.
	*/


	int add2=n+2; 		//Next number after n plus 2
	int minus2=n-2; 	//Next number after n minus 2

	if(n<=1){
		return false;
	}

	else if(isPrime(n)==0){
		return false;
	} 

	else if(isPrime(add2)==1){		//If the next number
		return true;
	}

	else if(isPrime(minus2)==1){
		return true;
	}

	else{
		return false;
	}

}

//Add a function that returns the smallest twin prime greater than n.

int nextTwinPrime(int n){
	// Go through the integers greater than n by 1 and check each of if they are twin prime then return the value if it is.
	// i cannot be n, because it has to be a number greater than n
	for(int i=(n+1) ; i>n ; i++){
		if(isTwinPrime(i)==1){
			return i;
		}
	}

}

//Add a function that returns the largest twin prime in the range a ≤ N ≤ b. If there is no twin primes in range, then return -1.

int largestTwinPrime(int a, int b){
	
	for (int n=b ; a<=n ; n--){
		if(isTwinPrime(n)==1){
			return n;
		}
	} 

	//Wait for for loop to be done

	return -1;
}









