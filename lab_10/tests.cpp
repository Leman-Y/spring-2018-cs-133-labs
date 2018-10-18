#include <iostream>
#include "funcs.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;

TEST_CASE("Testing Task A: minutesSinceMidnight & minutesUntil"){
	CHECK ( minutesSinceMidnight( {2,30} ) == 150); 
	CHECK ( minutesUntil( {10, 30}, {13, 40} )  == 190 );
	CHECK ( minutesUntil( {12, 00}, {13, 00} ) == 60  );
 

}

TEST_CASE("Testing Task B: addMinutes"){
	CHECK (convertStruct(addMinutes({8, 10}, 75)) == "{9, 25}" );
	CHECK (convertStruct(addMinutes({1, 10}, 60)) == "{2, 10}" );
	CHECK (convertStruct(addMinutes({13, 30}, 250)) == "{17, 40}" );
}

	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	Movie movie3 = {"Infinity War", ACTION, 160};
	Movie movie4 = {"Truth or Dare", THRILLER, 103};
	Movie movie5 = {"Ready Player One", THRILLER, 139};

	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie2, {16, 45}}; 
	TimeSlot morning3 = {movie3, {11, 15}};
	TimeSlot afternoon3 = {movie3, {12, 00}};
	TimeSlot daytime4 = {movie4, {12, 45}};
	TimeSlot evening4 = {movie4, {21, 45}};
	TimeSlot morning5 = {movie5, {11, 15}};
	TimeSlot evening5 = {movie5, {18, 15}};

TEST_CASE("Testing Task C: TimeSlotString"){
	CHECK( TimeSlotString(morning) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
	CHECK( TimeSlotString(daytime) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
	CHECK( TimeSlotString(evening) == "Black Panther ACTION (134 min) [starts at 16:45, ends by 18:59]");
	CHECK( TimeSlotString(morning3) == "Infinity War ACTION (160 min) [starts at 11:15, ends by 13:55]");
	CHECK( TimeSlotString(afternoon3) == "Infinity War ACTION (160 min) [starts at 12:0, ends by 14:40]");
	CHECK( TimeSlotString(daytime4) == "Truth or Dare THRILLER (103 min) [starts at 12:45, ends by 14:28]");
	CHECK( TimeSlotString(evening4) == "Truth or Dare THRILLER (103 min) [starts at 21:45, ends by 23:28]");
	CHECK( TimeSlotString(morning5) == "Ready Player One THRILLER (139 min) [starts at 11:15, ends by 13:34]");
	CHECK( TimeSlotString(evening5) == "Ready Player One THRILLER (139 min) [starts at 18:15, ends by 20:34]");

}

	Movie abba = {"Abba" , DRAMA , 120};
	TimeSlot afternoonSA = {movie5, {14, 10}};


TEST_CASE("Testing Task D: scheduleAfter"){

	CHECK( TimeSlotString( scheduleAfter(afternoonSA, abba) ) == "Abba DRAMA (120 min) [starts at 16:10, ends by 18:10]");
 	CHECK( TimeSlotString( scheduleAfter(morning5, movie3) ) == "Infinity War ACTION (160 min) [starts at 13:55, ends by 16:35]");


}

TEST_CASE("Testing Task E: timeOverlap"){
	CHECK( timeOverlap( morning , daytime ) == 0 );
	CHECK( timeOverlap( daytime , afternoon3 ) == 1);
	CHECK( timeOverlap( morning5 , evening5 ) == 0);



}


















