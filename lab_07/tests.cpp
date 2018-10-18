#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Testing encryptCaesar"){
	CHECK(encryptCaesar("Hello, World", 5) == "Mjqqt, Btwqi");
	CHECK(encryptCaesar("Way to Go", 5) == "Bfd yt Lt");
	CHECK(encryptCaesar("Way to Go!", -1000) == "Kom hc Uc!");
	CHECK(encryptCaesar("This is the word", 0) == "This is the word");
}

TEST_CASE("Testing encryptVigenere"){
	CHECK(encryptVigenere("hello", "cake") == "jevpq");
	CHECK(encryptVigenere("Apple Zebra 12345", "abcd") == "Aqroe Agerb 12345");
	CHECK(encryptVigenere("ab132;;-0_", "") == "ab132;;-0_");
}

TEST_CASE("Testing decryptCaesar"){
	CHECK(decryptCaesar("Mjqqt", 5) == "Hello");
	CHECK(decryptCaesar("Btwqi", 5)== "World");
	CHECK(decryptCaesar("What", 0)== "What");
}

TEST_CASE("Testing decryptVigenere"){
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
	CHECK(decryptVigenere("jevpq", "cake") == "hello");
	CHECK(decryptVigenere("Aqroe Agerb 12345", "abcd") == "Apple Zebra 12345");
	CHECK(decryptVigenere("This is a sentence"," ") == "This is a sentence");

}

//	CHECK(decryptVigenere("Aqroe Agerb 12345", "") == "Aqroe Agerb 12345");
//	CHECK(encryptCaesar("ab132;;-0_", "0") == "ab132;;-0_");
