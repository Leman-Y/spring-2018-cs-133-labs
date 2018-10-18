/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab 13

Task B: Class Network: Adding users
*/

#include <iostream>
#include <string>

using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn){
		username=usrn;
		displayname=dspn;

	}
    // Default Profile constructor (username="", displayname="")
    Profile(){
		username="";
		displayname="";

	}
    // Return username
    string getUsername(){
		return username;
	}
    // Return name in the format: "displayname (@username)"
    string getFullName(){
		return displayname+" (@"+username+")";

	}
    // Change display name
    void setDisplayName(string dspn){
		displayname=dspn;
	}
};


class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn){
		for( int i=0 ; i< MAX_USERS ; i++){
  		if(profiles[i].getUsername() == usrn){
  			return i;
  		}
		}
		
		return -1;  //If there is no matching id
	
	}
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network(){
		numUsers=0;
	}
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
	/*
	addUser(usrn, dspn) is the central function for the class. It allows adding new users. This function receives the username and display name of a new user, the new user can be 				  	signed up only if the following conditions are met:
		the new username usrn must be a non-empty alphanumeric string,
		there is no other users in the network with the same username,
		the array profiles is not full.
	If the above conditions are met, the new user should be added to the array profiles and the function should return true, otherwise don’t add the user and return false, thus 						indicating that the operation failed.
	*/
  bool addUser(string usrn, string dspn){
		if( usrn.length()!=0){
			for(int i=0; i< usrn.length() ; i++){
				if( isalnum(usrn[i])==0){
					return 0;
				}
			}
		
			if( findID(usrn) != -1){ 	//If it does equal to -1 that means there is no id in the array. If it does not there there is already an id so return 0
				return 0;
			}
			
			if (numUsers < MAX_USERS){
				Profile new_User(usrn,dspn);
				profiles[numUsers] = new_User;
				numUsers += 1;
				return true;

			}
			else{
				return 0;
			}
			
		}




	}
};

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}
