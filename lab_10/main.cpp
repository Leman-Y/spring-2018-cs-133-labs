#include <iostream>
#include "funcs.h"
#include "labstructs.h"
#include <string>

using namespace std;


int main(){

cout<<"Task A"<<endl;

cout<<minutesSinceMidnight( {2,30} )<<endl;

cout<<minutesUntil( {10, 30}, {13, 40} )<<endl;

cout<<minutesUntil( {13, 40} , {10, 30} )<<endl;


cout<<"Task B"<<endl;

cout<<convertStruct(addMinutes({8, 10}, 75))<<endl;


printTime(addMinutes({8, 10}, 75) );


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

cout<<endl;

cout<<"Task C"<<endl;

//cout<<printMovie(movie1)<<endl;		//No longer a void function so turn it into cout and endl

cout<<TimeSlotString(morning)<<endl;
cout<<TimeSlotString(daytime)<<endl;
cout<<TimeSlotString(evening)<<endl;
cout<<TimeSlotString(morning3)<<endl;
cout<<TimeSlotString(afternoon3)<<endl;
cout<<TimeSlotString(daytime4)<<endl;
cout<<TimeSlotString(evening4)<<endl;
cout<<TimeSlotString(morning5)<<endl;
cout<<TimeSlotString(evening5)<<endl;


cout<<endl;
cout<<"Task D"<<endl;

Movie abba = {"Abba" , DRAMA , 120};
TimeSlot afternoonSA = {movie5, {14, 10}};


cout<<TimeSlotString( scheduleAfter(afternoonSA, abba) )<<endl;
cout<<TimeSlotString( scheduleAfter(morning5, movie3) )<<endl;
//cout<<scheduleAfter(TimeSlot ts, Movie nextMovie)<<endl;

cout<<endl;
cout<<"Task E"<<endl;

cout<<timeOverlap( morning , daytime )<<endl; //Expect 0
cout<<timeOverlap( daytime , afternoon3 )<<endl; //Expect 1
cout<<timeOverlap( morning5 , evening5 )<<endl;	//Expect 0

return 0;
}




