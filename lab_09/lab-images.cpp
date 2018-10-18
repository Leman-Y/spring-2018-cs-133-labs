/*
  Author: Leman Yan
  Lab: 09
  Description:
    The program reads a PGM image from the file "inImage.pgm",
    and outputs a modified image to "outImage.pgm"
*/
/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab_09

	Reads a PGM file from "inImage.phm" and is modified to output multiple images via scaling, pixeling, invert, etc.
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}

void readImage1(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width, string file) { //String file. The file you want to save to
	ofstream ostr;
	ostr.open(file);
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage1(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("taskA.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage2(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("taskB.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage3(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("taskC.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage4(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("taskD.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

//File for picture E
void writeImage5(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("taskE.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

void taskA(){


	int imgA[MAX_H][MAX_W];					
	int h, w;
	
	readImage(imgA, h, w); // read it from the file "inImage.pgm"

	int outA[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//cout<<img[row][col]<<endl;
			if(imgA[row][col] > 0){
				outA[row][col]=255-imgA[row][col];
			}
			else{
				outA[row][col]=255;
			}

		}
	}

	writeImage(outA, h, w , "task-a.pgm");


}

void taskB(){

	int imgB[MAX_H][MAX_W];			//Redeclare, because it using the values from the previous task
	int h, w;
	
	readImage(imgB, h,  w); // read it from the file "inImage.pgm"

	int outB[MAX_H][MAX_W];

	//cout<<"w/2 "<<w/2<<endl;
	
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {

			//cout<<"col "<<col<<endl;
			if(col >= ((w/2)-1) ){					//Shouldn't it be col>= w/2? Isnt this the first half not the second half
				if(imgB[row][col] > 0){
					outB[row][col]=255-imgB[row][col];
				}
				else{
					outB[row][col]=255;
				}
			}
			else{
				outB[row][col]=imgB[row][col];
			}

		}
	}
	
	/*
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			outB[row][col]=imgB[row][col];
		}
	}
	*/
	writeImage(outB, h, w , "task-B.pgm");
}

void taskC(){

	int imgC[MAX_H][MAX_W];
	int h, w;
	
	readImage(imgC, h, w); // read it from the file "inImage.pgm"

	int outC[MAX_H][MAX_W];

	// Column 1/4 to 3/4 white space. Row 1/4 to 3/4 white space
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			if( (col >= (w/4) && col <= (3*w/4)) && (row >= (h/4) && row <= (3*h/4))  ){		
				if(outC[row][col] <= 255){
					outC[row][col]=255;
				}
							
			}
		
			else{							//It was taking previous values from the old image, so we need to include the else and the outC=imgC
				outC[row][col]=imgC[row][col];
	
			}
		}
	}

	writeImage(outC, h, w , "task-c.pgm");



}

void taskD(){
	//cout<<"hello"<<endl;
	int imgD[MAX_H][MAX_W];
	int h, w;

	readImage(imgD, h, w); // read it from the file "inImage.pgm"
	
	int outD[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
				//outD[row][col] = imgD[row][col];
			//if if doesnt work doesnt show both lines, but if else if shows both for some reason.
			if(  ( row >= (h*1/4)  && row <= (h*3/4) )  &&  col == (w*1/4)  )	//I did = not ==
			{

				outD[row][col]=255;
				
			}
			else if( ( row >= (h*1/4)  && row <= (h*3/4) )  &&  col == (w*3/4)   )
			{
				outD[row][col]=255;
			}

			else if(  ( col >= (w*1/4)  && col <= (w*3/4) )  &&  row == (h*1/4)  )
			{
				outD[row][col]=255;
			}	
			else if( ( col >= (w*1/4)  && col <= (w*3/4) )  &&  row == (h*3/4)   )
			{
				outD[row][col]=255;
			}
			else
			{
				outD[row][col] = imgD[row][col];
			}

		}
	}

	// and save this new image to file "taskD.pgm"
	writeImage(outD, h, w , "task-d.pgm");


}

void taskE(){
	int imgE[MAX_H][MAX_W];					
	int h, w;
	
	readImage(imgE, h, w); // read it from the file "inImage.pgm"

	int outE[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//outE[row][col]=imgE[row][col];
			int rowtt=row*2;		// row times two
			int coltt=col*2;		// col times two
			outE[rowtt][coltt]=imgE[row][col];
			outE[rowtt+1][coltt]=imgE[row][col];
			outE[rowtt][coltt+1]=imgE[row][col];
			outE[rowtt+1][coltt+1]=imgE[row][col];		//I didnt add the values it was going minus one
		}
	}

	writeImage(outE, 2*h, 2*w , "task-e.pgm");

}

void taskF(){
	int imgF[MAX_H][MAX_W];					
	int h, w;
	
	readImage(imgF, h, w); // read it from the file "inImage.pgm"

	int outF[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//Create 4 int values and the add them up then divide by 4 to get the average. Set that value to the pixelate
			//1 2
			//3 4
					
			int rowtt=row*2;		// row times two
			int coltt=col*2;		// col times two
			int first=imgF[rowtt][coltt];
			int second=imgF[rowtt+1][coltt];
			int third=imgF[rowtt][coltt+1];
			int fourth=imgF[rowtt+1][coltt+1];
			int average=(first+second+third+fourth)/4;

			outF[rowtt][coltt]=average;
			outF[rowtt+1][coltt]=average;
			outF[rowtt][coltt+1]=average;
			outF[rowtt+1][coltt+1]=average;		//I didnt add the values it was going minus ones
			
			/* This code doesn't look too pixelated. Not too blurry. Not what the task wants.
			int first=imgF[row][col];
			int second=imgF[row+1][col];
			int third=imgF[row][col+1];
			int fourth=imgF[row+1][col+1];
			int average=(first+second+third+fourth)/4;

			outF[row][col]=average;
			outF[row+1][col]=average;
			outF[row][col+1]=average;
			outF[row+1][col+1]=average;
			*/
		}
	}

	writeImage(outF, h, w , "task-f.pgm");



}
































