#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(int image[MAX_H][MAX_W], int &height, int &width);

void writeImage(int image[MAX_H][MAX_W], int height, int width , string file);

//void writeImage1(int image[MAX_H][MAX_W], int height, int width);

//void writeImage2(int image[MAX_H][MAX_W], int height, int width);

//void writeImage3(int image[MAX_H][MAX_W], int height, int width);

void taskA();

void taskB();

void taskC();

void taskD();

void taskE();

void taskF();
