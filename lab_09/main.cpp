#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "lab-images.h"
#include "invert.cpp"

using namespace std;




int main() {
	
	//REGULAR IMAGE
	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			out[row][col] = img[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w , "outImage.pgm");


	

	taskA();			//Void task A; is declaring the function not actually accessing it.

	taskB();

	taskC();

	taskD();

	taskE();

	taskF();

	
}

