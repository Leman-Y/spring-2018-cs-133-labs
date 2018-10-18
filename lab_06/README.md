/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_06
Debugging Lab

*/

Part 1:
for(int i=0; i > CAPACITY; i++){
	-i should be less than capacity, because i will be 9,10, etc for the loop to run. This will make the index go past the array.

Part 2: 
if (arr[i] < min_val){ 
	-min_val is equal to 0 and all the numbers in the array are greater than zero. The min value outputted would be zero. min_val should be the first item in the array to compare with the other 			items in the array. min_val=arr[0]. This will allow to see if the next items are less than the 
		first item. If they are, then you set the min_val to that number. 

Part 3:
for(int i=0; i < CAPACITY; i++){
	-It should be i < (CAPACITY-1), because the index is going off of the array. If i=7, then i+1=8.
		There is no arr[8] value in the predetermined array. This will cause arr[8] to be a huge number that is not part of the array. 
		-The right line: for(int i=0; i< (CAPACITY-1); i++){
			This allows you to compare the values in the array without worrying about falling off the 
			index.

Part 4:
sum += i;
	-It should be sum+= arr[i]. You are adding up the value at the index of the array NOT the index
		itself. You are basically adding 0+1+2+...+7. This is not what you want.

Part 5:
if (arr[i] > arr[max_i]) should be
	- if(arr[i] > arr[max_i]){    code      } 
		You are missing the brackets for the if loop. This will cause the program to not run.
max_i=arr[i];
	-This should be max_i = i; You want to update the index not the value of the index. You are trying
		to find the max index with the greatest value. 

