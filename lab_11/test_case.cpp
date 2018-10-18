#include <iostream>
#include <string>

using namespace std;

string * createAPoemDynamically() {
    string *ppoem;      // declare a pointer to string
                        // (it will store the address)

    ppoem = new string; // <-- DYNAMICALLY ALLOCATE MEMORY
                        //     for a poem string and
                        //     store its address in the pointer

    *ppoem =            // put a poem there
      "   Those             \n"
      "   who can write     \n"
      "   have a            \n"
      "   lot to            \n"
      "   learn from those  \n"
      "   bright            \n"
      "   enough            \n"
      "   not to.           \n"; 

    return ppoem;       // return the address where the poem is
}


int main() {
  std::cout << "Hello World!\n";
  
	string * p;
	p = createAPoemDynamically();

	cout<<*p<<endl;

	// allocate an integer dynamically
	int *z = new int;
	*z = 1234;          // we are using it
	cout << *z << endl; //  ''  ''  ''  ''
	cout <<"z"<<z<<endl;
	cout << &z<<endl;
	// once it's not needed, delete it:
	delete z;


}
