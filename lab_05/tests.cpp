#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Testing isDivisibleBy"){
	CHECK(isDivisibleBy(10,5)==true);
	CHECK(isDivisibleBy(10,3)==false);
	CHECK(isDivisibleBy(100, 25) == true);
	CHECK(isDivisibleBy(35, 17) == false);
}

TEST_CASE("Testing isPrime"){
	CHECK(isPrime(11)==true);
	CHECK(isPrime(2)==true);
	CHECK(isPrime(1)==false);
	CHECK(isPrime(0)==false);
}

TEST_CASE("Testing nextPrime"){
	CHECK(nextPrime(0)==2);
	CHECK(nextPrime(1)==2);
	CHECK(nextPrime(13)==17);
	CHECK(nextPrime(17)==19);
}

TEST_CASE("Testing countPrimes"){
	CHECK(countPrimes(0, 1)==0);
	CHECK(countPrimes(0, 2)==1);
	CHECK(countPrimes(1, 10)==4);
	CHECK(countPrimes(13, 17)==2);

}

TEST_CASE("Testing isTwinPrime"){
	CHECK(isTwinPrime(0)==0);
	CHECK(isTwinPrime(1)==0);
	CHECK(isTwinPrime(2)==0);
	CHECK(isTwinPrime(3)==1);
	CHECK(isTwinPrime(11)==1);
	CHECK(isTwinPrime(15)==0);

}

TEST_CASE("Testing nextTwinPrime"){
	CHECK(nextTwinPrime(0)==3);
	CHECK(nextTwinPrime(1)==3);
	CHECK(nextTwinPrime(5)==7);
	CHECK(nextTwinPrime(17)==19);

}

TEST_CASE("Testing largestTwinPrime"){
	CHECK(largestTwinPrime(0, 1) == -1);
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);

}
































