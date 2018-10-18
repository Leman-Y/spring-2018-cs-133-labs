/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_10
Program: Structures and functions

*/

#include <iostream> 
#include <cmath>
#include <string>

#include "labstructs.h"


using namespace std;

//TASK A
int minutesSinceMidnight(Time time){
	int hour=time.h;
	int minutes=time.m;
	int totalMinutes;  		//Since 0:00 AM

	totalMinutes=hour*60+minutes;

	
	return totalMinutes;
}

/*
The second function should receive two Time arguments earlier and later and report how many minutes separate the two moments. For example, when passing 10:30AM and 1:40PM:

minutesUntil( {10, 30}, {13, 40} )  
// ==> should return 190 minutes
(A caveat: If the earlier moment of time happens to be after the later moment of time, report a negative number of minutes. Although it’s not difficult to achieve this if your implementation for the first function is correct.)
*/

int minutesUntil(Time earlier, Time later){
	int earlierMin=minutesSinceMidnight(earlier);
	int laterMin=minutesSinceMidnight(later);

	int total=laterMin-earlierMin;


	return total;
}

//TASK B
/*
Time addMinutes(Time time0, int min);
The function should create and return a new moment of time that is min minutes after time0. Example:

addMinutes({8, 10}, 75)
// ==> should return {9, 25}
(We will not test how your function behaves if the new returned time will be on the next day, feel free to assume that it will remain withing the same day, ≤ 23:59.)
*/

Time addMinutes(Time time0, int min){
	int hour=time0.h;
	int minutes=time0.m;

	int newHour;
	int newMinutes;

	newMinutes=(minutes+min)%60;
	newHour=hour+(minutes+min)/60;
	if (newHour >= 24){
		newHour=newHour%24;
		
		return {newHour , newMinutes} ;
	}


	return {newHour , newMinutes} ;
}

string convertStruct(Time time){
	string hour=to_string(time.h);
	string minutes=to_string(time.m);

	string finalTime;

	finalTime="{"+hour+", "+minutes+"}";

	return finalTime;	
}


//TASK C




string printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }

	string result;

	result=mv.title+" "+ g +" (" + to_string(mv.duration) + " min)";

    //cout << mv.title << " " << g << " (" << mv.duration << " min)";

	return result;	

	//^^^ This was not returning anything and you need it to be used in TimeSlotString so change it into a string
	// use to_string to turn int to string
}

string printTime(Time time) {
	string result;

	result=to_string(time.h) + ":" + to_string(time.m);
	//cout << time.h << ":" << time.m;

	return result;
}

string convertStructTwo(Time time){
	//Version two does not include the brackets
	string hour=to_string(time.h);
	string minutes=to_string(time.m);

	string finalTime;

	finalTime=hour+":"+minutes;

	return finalTime;	
}
/*
string convertTimeSlot(TimeSlot timeslot){
	//Version two does not include the brackets
	string hour=to_string(timeslot.h);
	string minutes=to_string(timeslot.m);

	string finalTime;

	finalTime=hour+":"+minutes;

	return finalTime;	
}
*/

std::string TimeSlotString(TimeSlot ts){
//Output: "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]"


	string timeSlot;

	timeSlot = printMovie(ts.movie) + " [starts at " +  printTime(ts.startTime) + ", ends by " +   convertStructTwo (addMinutes ( ts.startTime , ts.movie.duration ) )     +"]";

	return timeSlot;



}

//TASK D

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	/*
	The function should produce and return a new TimeSlot for the movie nextMovie, scheduled immediately after the time slot ts.

	For example, if the movie scheduled in ts starts at 14:10 and lasts 120 minutes, then the time slot for the next movie should start at exactly 16:10.
	*/

	TimeSlot newTimeSlot;
	newTimeSlot.movie= nextMovie;
	newTimeSlot.startTime= addMinutes(ts.startTime , nextMovie.duration);

	return newTimeSlot;
}

//TASK E

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	//Returns a 0 or 1
	/*
	The function should return true if the two time slots overlap, otherwise return false. (Take into account the starting times of the time slots and the duration of the scheduled 		movies.)
	*/
	//cout<<minutesSinceMidnight( {2,30} )<<endl;

	//int firstMovie = minutesSinceMidnight ( addMinutes ( ts1.startTime , ts1.movie.duration ) ); 
	int firstStart = minutesSinceMidnight ( ts1.startTime    ) ;
	int firstEnd = minutesSinceMidnight ( addMinutes ( ts1.startTime , ts1.movie.duration ) ) ;

	//int secondMovie = addMinutes ( ts2.startTime , ts2.move.duration ) ;
	int secondStart = minutesSinceMidnight ( ts2.startTime ) ;
	int secondEnd = minutesSinceMidnight ( addMinutes ( ts2.startTime , ts2.movie.duration ) );

	// If the second movie  is in between the duration of the first movie
	// If the first movie is in between the duration of the second movie

	if (  ( secondStart > firstStart ) && ( secondStart < firstEnd) ){
		return 1;
		
	}

	else if (  (secondEnd > firstStart) && (secondEnd < firstEnd) ){
		return 1;


	}

	else if(  (firstStart > secondStart ) && (firstStart < secondEnd) ){
		return 1;
	}

	else if(  (firstEnd > secondStart ) && (firstEnd < secondEnd )  ){
		return 1;
	
	}

	else {
		return 0;

	}

}




