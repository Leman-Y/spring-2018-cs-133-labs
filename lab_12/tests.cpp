#include <iostream>
#include "funcs.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;

TEST_CASE("TASK B: sumRange"){
	CHECK( sumRange(1, 3) == 6);
	CHECK( sumRange(-2, 10) == 52);
	CHECK( sumRange(0, 0) == 0);

}

TEST_CASE("TASK C: sumArray"){

	int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

	int sum1 = sumArray(arr, size); // Add all elements

	CHECK( sum1 == 43);
    
    int sum2 = sumArray(arr, 5); // Add up first five elements

	CHECK( sum2 == 34);	

    delete[] arr;         // deallocate it


}

TEST_CASE("TASK D: isAlphanumerica"){

	CHECK(isAlphanumeric("ABCD") == 1 );
	CHECK(isAlphanumeric("Abcd1234xyz") == 1);
	CHECK(isAlphanumeric("KLMN 8-7-6") == 0);



}


TEST_CASE("TASK E: nestedParens"){

	CHECK(nestedParens("((()))") == 1 );
	CHECK(nestedParens("()") == 1 );
	CHECK(nestedParens("") == 1);

	CHECK(nestedParens("(((") == 0 );
	CHECK(nestedParens("(()") == 0);
	CHECK(nestedParens(")(") == 0);
	CHECK(nestedParens("a(b)c") == 0);

}

TEST_CASE("TASK F: divisible"){

	int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};

	CHECK(divisible(prices,9) == 1);



	int numbers [] = {7, 9, 2, 2};

	CHECK(divisible(numbers,4) == 0);


	int one [] = {1};

	CHECK(divisible(one,1) == 0);


	




}



























