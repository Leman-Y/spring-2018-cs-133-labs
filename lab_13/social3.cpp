/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab 13

Task C. Class Network: Following others
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


 bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
 // following[id1][id2] == true when id1 is following id2


public:
  // Constructor, makes an empty network (numUsers = 0)
  Network(){
			numUsers=0;

			for( int r=0; r < MAX_USERS ; r++){
				for( int c=0; c < MAX_USERS ; c++){
						following[r][c] = 0;					//Set everything to zero
			
				}
			}

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




		// Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
		// return true if success (if both usernames exist), otherwise return false
		bool follow(string usrn1, string usrn2){
			if( (findID(usrn1) != -1) && (findID(usrn2) != -1)){	//-1 is when findID doesn't find that id in the array. So if both of them do not equal to -1 then both usernames exist
				following[findID(usrn1)] [findID(usrn2)] = true;			//Make usrn1 follow usrn 2
				return true;												//return true because it is a success
			}
			return false;											//Otherwise return false
		}

		// Print Dot file (graphical representation of the network)
		//Digraph should look like this:
		/*
		digraph {
			"@mario"
			"@luigi"
			"@yoshi"

			"@mario" -> "@luigi"
			"@luigi" -> "@mario"
			"@luigi" -> "@yoshi"
			"@yoshi" -> "@mario"
		}
		*/
		
		void printDot(){
			
			cout << "digraph {" << endl;
			for (int i = 0; i < numUsers; i++) {
				cout << "\t\"@" + profiles[i].getUsername() + "\"" << endl;
			}
	
			cout << "\n";
	
			for (int r = 0; r < MAX_USERS; r++) {		//r=row
				for (int c = 0; c < MAX_USERS; c++) {		//c=column
					if (following[r][c]) {
						cout << "\t\"@" + profiles[r].getUsername() + "\" -> \"" + profiles[c].getUsername() + "\"" << endl;	//user at r is following user at c
					}
				}
			}
			cout << "}" << endl;


		}
		

	};



int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
