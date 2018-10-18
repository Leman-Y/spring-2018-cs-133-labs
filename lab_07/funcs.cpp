/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_07
Program: Strings and Ciphers

*/

#include <iostream>
#include <string>

using namespace std;

void testascii(std::string s){

//Loop through the string and print the ascii values and the char

	for(int i=0; i<s.length(); i++){
		int ascii=int(s[i]);
		cout<<s[i]<<' '<<ascii<<endl;
	}
	/*
	int test=int ('5');
	cout<<test<<endl;    '5' vs 5 is different when you do int('5') vs int(5)
	*/

}

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
//For example, when the shift is +5, every A becomes an F, every B becomes a G, and so on:
//97 for a ,          65 for A

	//cout<<c<<rshift<<endl;
	//cout<<isupper(c)<<endl;
	if(isupper(c) == 256){  //256 is the true value. If it does not equal to 0 then it is an uppercase letter
		int newletter=(int(c)+rshift)-65;
		int letter=newletter%26;
		if(letter<0){  //Ex. -2
			letter=(26-abs(letter));
			char result=char(letter)+65;	

		}

		else{
			char result=char(letter)+65;
			return result;
		} 


		
	}

	else if(islower(c) == 512){  //512 is the true value
		int newletter=(int(c)+rshift)-97;
	
		//cout<<newletter<<endl;
		int letter=newletter%26;
		
		if(letter<0){  //Ex. -2			If its negative then you must move from the back
			letter=(26-abs(letter));
			char result=char(letter)+97;		

		}

		else{
			char result=char(letter)+97;
			return result;
		} 

	}

	else{		//It is not an alphabetical character
		return c;

	}
}

// Caesar cipher encryption
std::string encryptCaesar(string plaintext, int rshift){
	string s="";	//Put the shifted letters into this

	for(int i=0; i<plaintext.length() ; i++){
		s+=shiftChar(plaintext[i], rshift);
	}


return s;
}


string encryptVigenere(string plaintext, string keyword){
/*
Hello, World!
and the keyword is

cake
The first letter of the keyword is c, which is the third letter of the alphabet. That means we shift the first letter of the plaintext H to the right by 3-1 = *2*, which gives J.

- reset cake when you past e. use for loop?     -Go over each letter in the plaintext check to see if it is an alphabetical letter  if yes then use the shifts, if not then just return the non alphabetical character

*/

//In a function if there are multiple if statements that satisfy the condition, then all of them would execute. But if and else if. if the condition works with if then it will not go to else if.
// string.length() is the actual length so you need to minus one for index.

	if(keyword==""){
		return plaintext;
	}

string encrypt="";  //The encrypted string

int keywordi=0; //I PUT THIS IN THE FOR LOOP AND IT KEPT ON RESETTING IT TO 0. OWOW.

	for(int i=0 ; i<plaintext.length() ; i++){  //Go through the characters in string plaintext
					//Set the index of keyword to be 0. After each upper or lower than you addone,
	
		if(keyword==""){							//If there is no keyword then there is no cipher, therefore just return the original plaintext.
			return plaintext;
		}


		if (keywordi == (keyword.length())){
			keywordi=0;

		}

		if (isupper(plaintext[i])==256){			//Its an uppercase letter
			int keywordchar= int (keyword[keywordi]);
			int shift= ((keywordchar-97)%26);							//I did minus 65 but that was for uppercase not lowercase b/c keyword is lowercase not 															uppercase
			encrypt+=shiftChar(plaintext[i], shift);
			keywordi+=1;
		}

		else if (islower(plaintext[i])==512){		//Its a lowercase letter
			int keywordchar= int (keyword[keywordi]);
			int shift= ((keywordchar-97)%26);
			encrypt+=shiftChar(plaintext[i], shift);
			keywordi+=1;
		}

		else{		//Its not an alphabetical letter
			encrypt+=plaintext[i];

		}
		
	}




return encrypt;
}

/*
	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	So the problem was keyword.length is 4 but i did keyword.length-1 which is 3. So whenever the index got to 3 it would go to zero before it had a chance to actually to access that index which would 
	cake[3]=='e'. The if statement in the beginning already checked if the counter (keywordi) was 3, so the shift was never able to happen.

	And then, we need to do if and else if, because if was both if and if then we get JH, because the H would be the else of islower. So H would get added to the string.
	
*/



string decryptCaesar(string ciphertext, int rshift){
	/*
		the Caesar cipher moves it left or right so you just need to reverse the rshift by multiplying it by -1.
	*/

	return encryptCaesar(ciphertext, (rshift*-1));

}


string decryptVigenere(string ciphertext, string keyword){
	// "Hello"  "cake"
	//  Jevpq

	if(keyword==" "){
		return ciphertext;
	}


string decrypt="";  //The encrypted string

int keywordi=0; //I PUT THIS IN THE FOR LOOP AND IT KEPT ON RESETTING IT TO 0. OWOW.

	for(int i=0 ; i<ciphertext.length() ; i++){  //Go through the characters in string plaintext
					//Set the index of keyword to be 0. After each upper or lower than you addone,
	
		if(keyword==""){							//If there is no keyword then there is no cipher, therefore just return the original plaintext.
			return ciphertext;
		}


		if (keywordi == (keyword.length())){
			keywordi=0;

		}

		if (isupper(ciphertext[i])==256){			//Its an uppercase letter
			int keywordchar= int (keyword[keywordi]);
			int shift= ((keywordchar-97)%26);							//I did minus 65 but that was for uppercase not lowercase b/c keyword is lowercase not 															uppercase
			decrypt+=shiftChar(ciphertext[i], -shift);
			keywordi+=1;
		}

		else if (islower(ciphertext[i])==512){		//Its a lowercase letter
			int keywordchar= int (keyword[keywordi]);
			int shift= ((keywordchar-97)%26);
			decrypt+=shiftChar(ciphertext[i], -shift);
			keywordi+=1;
		}

		else{		//Its not an alphabetical letter
			decrypt+=ciphertext[i];

		}
		
	}




return decrypt;
}


























