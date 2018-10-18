#include "labstructs.h"
#include <string>
using namespace std;

int minutesSinceMidnight(Time time);

int minutesUntil(Time earlier, Time later);

Time addMinutes(Time time0, int min);

string convertStruct(Time time);

string printMovie(Movie mv);

string printTime(Time time);

string convertStructTwo(Time time);

string convertStructThree(TimeSlot timeslot);

string TimeSlotString(TimeSlot ts);

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

bool timeOverlap(TimeSlot ts1, TimeSlot ts2);
