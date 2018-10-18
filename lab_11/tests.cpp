#include <iostream>
#include "funcs.h"
#include "def.h"
#include <cmath>	//Header to use floor

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;


TEST_CASE("TASK A"){	//Floor round down to nearest integer

	Coord3D pointA = {10, 20, 30};
	Coord3D pointB = {13 , 14 , 15};


	CHECK( floor(length(&pointA)) == floor(37.4166));
	CHECK( floor(length(&pointB)) == floor(24.2899));

}


TEST_CASE("TASK B"){

	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};

	Coord3D pointY = {5, 5, 5};
	Coord3D pointZ = {10, 10, 10};

	CHECK( fartherFromOrigin(&pointP, &pointQ) == &pointP);
	CHECK( fartherFromOrigin(&pointY, &pointZ) == &pointZ);


}







TEST_CASE("TASK C"){

Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

move(&pos, &vel, 2.0); // struct pos gets changed
// prints: 2 -10 100.4

	CHECK( pos.x == 2);
	CHECK( pos.y == -10);
	CHECK( pos.z == 100.4);

Coord3D pos1 = {7 , 8 , 9};
Coord3D vel1 = {11 , 12 , 13}; 

move(&pos1 , &vel1 , 3.0);

	CHECK( pos1.x == 40);
	CHECK( pos1.y == 44);
	CHECK( pos1.z == 48);
	
//Prints 40 44 48


}



TEST_CASE("TASK E"){

Coord3D *ppos = createCoord3D( 10 , 20 ,30);

Coord3D *pvel = createCoord3D(5.5 , -1.4 , 7.77);

move(ppos, pvel, 10.0);

	CHECK( ppos -> x == 65);
	CHECK( ppos -> y == 6);
	CHECK( ppos -> z == 107.7);

//Coordinates after 10 seconds: 65 6 107.7

deleteCoord3D(ppos); // release memory
deleteCoord3D(pvel);


}


TEST_CASE("TASK F"){
	// make new particle
	Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
	double time = 0.0;
	double dt = 0.1;
	while(time < 0.1) {
		// update its velocity
		setVelocity(p, 10.0 * time, 0.3, 0.1);
	   // move the particle
		move(p, dt);
		time += dt;
	}
	//Time: 0.1     1, 1.53, 2.01
	CHECK( getPosition(p).x == 1 );
	CHECK( getPosition(p).y == 1.53 );
	CHECK( getPosition(p).z == 2.01 );

	while(time < 3) {
		// update its velocity
		setVelocity(p, 10.0 * time, 0.3, 0.1);
	   // move the particle
		move(p, dt);
		time += dt;
	}
	//Time: 3 	Position: 44.5, 2.4, 2.3

	CHECK( getPosition(p).x == 44.5 );
	CHECK( getPosition(p).y == 2.4 );
	CHECK( getPosition(p).z == 2.3);


	deleteParticle(p);
}


















































