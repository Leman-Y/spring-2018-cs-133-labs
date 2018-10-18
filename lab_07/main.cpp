#include <iostream>

#include "funcs.h"

using namespace std;

int main(){

testascii("apple 3 swifty");
cout<<'\n';
testascii("Cat :3 Dog");
cout<<'\n';
//testascii is a void function, so it doesnt return anything. Therefore you dont need the cout and endl
/*
cout<<isupper('a')<<endl;
cout<<isupper('b')<<endl;
cout<<isupper('c')<<endl;
cout<<isupper('A')<<endl;
cout<<isupper('A')<<endl;
cout<<isupper('A')<<endl;
*/
/*
if(isupper('A')!= 0){
	cout<<'A'<<endl;
}
	cout<<'A'<<endl;
cout<<isupper('Z')<<endl;
cout<<isupper('D')<<endl;
cout<<islower('d')<<endl;
*/
/*
char shiftChar(char c, int rshift);

string encryptCaesar(string plaintext, int rshift);
*/
cout<<"shiftChar"<<endl;
cout<<shiftChar('a',3)<<endl;
cout<<shiftChar('a',100)<<endl;
cout<<shiftChar('j',10)<<endl;
cout<<shiftChar('z',3)<<endl;
cout<<shiftChar('z',0)<<endl;
cout<<shiftChar('z',1)<<endl;
cout<<'\n';

cout<<"encryptCaesar"<<endl;
cout<<encryptCaesar("A Light-Year Apart", 5)<<endl;
cout<<"Way to Go! "<< encryptCaesar("Way to Go!", 1000) <<endl;
cout<<"Way to Go! "<< encryptCaesar("Way to Go!", -1000) <<endl;
cout<<encryptCaesar("Hello, World!", 10)<<endl;
cout<<'\n';

cout<<"encryptVigenere"<<endl;
cout<<encryptVigenere("Hello, World!", "cake")<<endl;
cout<<encryptVigenere("Hello", "cake")<<endl;
cout<<encryptVigenere("Apple Zebra 12345", "abcd")<<endl;
cout<<'\n';

cout<<"decryptCaesar"<<endl;
cout<<decryptCaesar("F Qnlmy-Djfw Fufwy", 5)<<endl;
cout<<decryptCaesar("Imk fa Sa!" , 1000)<<endl;
cout<<'\n';

//cout<<decryptCaesar("w", 100)<<endl;
//cout<<-10%26<<endl;
//cout<<abs(-10%26)<<endl;
cout<<"decryptCaesar"<<endl;
cout<<decryptVigenere("Jevpq, Wyvnd!", "cake")<<endl;
cout<<decryptVigenere("Aqroe Agerb 12345", "abcd")<<endl;
}




























