/*
Author: Leman Yan
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab 12

Pointers
*/


#include <iostream>
#include <cmath>

#include "def.h"

using namespace std;

/*

struct Coord3D {
    double x;
    double y;
    double z;
};

*/

//TASK A
double length(Coord3D *p){
	
	//Coord3D coord=*p;	//Assign a new variable to the pointer

	int xCoord=p->x;
	int yCoord=p->y;
	int zCoord=p->z;

	double distance=sqrt( (xCoord)*(xCoord) + (yCoord)*(yCoord) + (zCoord)*(zCoord) ); 

	return distance;

}

//TASK B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

	if( abs( length(p1) ) > abs( length(p2) ) ){
		return p1;

	}	
	else{
		return p2;
	}
}

//TASK C

void move(Coord3D *ppos, Coord3D *pvel, double dt){
	ppos -> x= ppos -> x + (dt * pvel -> x);
	ppos -> y= ppos -> y + (dt * pvel -> y);
	ppos -> z= ppos -> z + (dt * pvel -> z);


}


//TASK E


Coord3D* createCoord3D(double x, double y, double z){

	Coord3D* pointer = new Coord3D;
	pointer -> x = x;
	pointer -> y = y;
	pointer -> z = z;


	return pointer;
}


void deleteCoord3D(Coord3D *p){

	delete p;

}


//TASK F

/*

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz);
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz);
// get its current position
Coord3D getPosition(Particle *p);
// update particle's position after elapsed time dt
void move(Particle *p, double dt);
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p);

*/

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz){
	Particle* particle = new Particle; //Allocate memory for it
	
	particle -> x = x;
	particle -> y = y;
	particle -> z = z;
	particle -> vx = vx;
	particle -> vy = vy;
	particle -> vz = vz;

	return particle;

}


// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
	
	p -> vx = vx;
	p -> vy = vy;
	p -> vz = vz;


}

// get its current position
Coord3D getPosition(Particle *p){
	Coord3D pos;
	
	pos.x = p -> x;
	pos.y = p -> y;
	pos.z = p -> z;

	return pos;

}


// update particle's position after elapsed time dt
void move(Particle *p, double dt){
	p -> x= p -> x + (dt * p -> vx);
	p -> y= p -> y + (dt * p -> vy);
	p -> z= p -> z + (dt * p -> vz);	



}


// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
	
	delete p;

}























