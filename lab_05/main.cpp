#include <iostream>

#include "funcs.h"

using namespace std;

int main(){


cout<<"1=True and 0=False"<<endl;
cout<<"isDivisibleBy program"<<endl;
cout<<isDivisibleBy(100,4)<<endl;
cout<<isDivisibleBy(100,9)<<endl;

cout<<"isPrime program"<<endl;
cout<<isPrime(10)<<endl;
cout<<isPrime(11)<<endl;
cout<<isPrime(2)<<endl;
cout<<isPrime(1)<<endl;
cout<<isPrime(0)<<endl;

cout<<"nextPrime program"<<endl;
cout<<nextPrime(10)<<endl;
cout<<nextPrime(1)<<endl;
cout<<nextPrime(2)<<endl;

cout<<"countPrimes program"<<endl;
cout<<countPrimes(1, 10)<<endl;
cout<<countPrimes(0, 2)<<endl;
cout<<countPrimes(13, 17)<<endl;

cout<<"isTwinPrime"<<endl;
cout<<isTwinPrime(1)<<endl;
cout<<isTwinPrime(3)<<endl;
cout<<isTwinPrime(11)<<endl;
cout<<isTwinPrime(10)<<endl;
cout<<isTwinPrime(15)<<endl;

cout<<"nextTwinPrime"<<endl;
cout<<nextTwinPrime(1)<<endl;
cout<<nextTwinPrime(5)<<endl;
cout<<nextTwinPrime(14)<<endl;

cout<<"largestTwinPrime"<<endl;
cout<<largestTwinPrime(1,7)<<endl;
cout<<largestTwinPrime(1,2)<<endl;
cout<<largestTwinPrime(14,16)<<endl;
}


