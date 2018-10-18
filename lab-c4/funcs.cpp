#include <iostream>
#include <string>

using namespace std;

/*
Implementing Person 2's Task:

-Design a function that checks for cheating in user input and ensures that the game is played in an alternating fashion between two players.

-Establish the game order (i.e. print board every time a move is made to show the changes occuring in the game) You may assume that the print board function and board characterization function already exists.

*/
/*
	-How can you check for cheating if both users are alternating moves? No one will be able to go twice. 
	-Start the game and rotate between players 1 and 2
	-Input column number


*/

void displayboard();	//Display the board. Must represent the pieces differently by different numbers, symbols, or characters

void check_state(displayboard);		//Check if there are any win conditions, if so then stop the game and declare the winner. If no more moves then its a tie. Returns a 1 or 0. 1 for a win. 0 to no winner.

void input_move(int column, int player);		//Updates the board with the players' move. Int column tells where you want the piece placed. Int player tells what kind of piece is placed.

int main(){

	//4 by 4 connect so 16 movies in total

	int moves=0;

	do{
	int column; //Column number you want to place the piece 0-3
	//Player 1
	displayboard();

	cin>>column;
	input_move(column, 1);
	check_state(displayboard);
	moves++;
	

	//Player 2
	displayboard();

	cin>>column; 	
	input_move(column, 2);
	check_state(displayboard);
	moves++;

	} while (  moves<16  );



}
