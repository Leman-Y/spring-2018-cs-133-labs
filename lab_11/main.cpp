/*
Name: Leman Yan
Class: CS-133
Lab: 11

Lab is about pointers
*/


#include <iostream>
#include "def.h"
#include "funcs.h"


using namespace std;

int main(){

//Task A

cout<<"TASK A"<<endl;

Coord3D pointA = {10, 20, 30};
   
cout << length(&pointA) << endl; // would print 37.4166

Coord3D pointB = {13 , 14 , 15};

cout << length(&pointB)<<endl;



//Task B

cout<<"TASK B"<<endl;

Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};

cout << "Address of P: " << &pointP << endl;
cout << "Address of Q: " << &pointQ << endl << endl;

Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

cout << "ans = " << ans << endl; // So which point is farther?

cout<<endl;

pointP = {5, 5, 5};
pointQ = {10, 10, 10};

cout << "Address of P: " << &pointP << endl;
cout << "Address of Q: " << &pointQ << endl << endl;

ans = fartherFromOrigin(&pointP, &pointQ);

cout << "ans = " << ans << endl; // So which point is farther?

//Task C
cout<<"TASK C"<<endl;

Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

move(&pos, &vel, 2.0); // struct pos gets changed
cout << pos.x << " " << pos.y << " " << pos.z << endl;
// prints: 2 -10 100.4

Coord3D pos1 = {7 , 8 , 9};
Coord3D vel1 = {11 , 12 , 13}; 
move(&pos1, &vel1, 3.0);

cout << pos1.x << " " << pos1.y << " " << pos1.z << endl;


//TASK E
cout<<"TASK E"<<endl;

/*
Enter position: 10 20 30
Enter velocity: 5.5 -1.4 7.77
Coordinates after 10 seconds: 65 6 107.7
*/
/*
double x=10;
double y=20;
double z=30;
*/
Coord3D *ppos = createCoord3D( 10 , 20 ,30);

Coord3D *pvel = createCoord3D(5.5 , -1.4 , 7.77);

move(ppos, pvel, 10.0);

cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;



//Coordinates after 10 seconds: 65 6 107.7


deleteCoord3D(ppos); // release memory
deleteCoord3D(pvel);





//TASK F
cout<<"Task F"<<endl;     


// make new particle
Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
double time = 0.0;
double dt = 0.1;
while(time < 3.0) {
    // update its velocity
    setVelocity(p, 10.0 * time, 0.3, 0.1);

    // move the particle
    move(p, dt);
    time += dt;

    // reporting its coordinates
    cout << "Time: " << time << " \t";
    cout << "Position: "
         << getPosition(p).x << ", "
         << getPosition(p).y << ", "
         << getPosition(p).z << endl;
}
// remove the particle, deallocating its memory
deleteParticle(p);




/* Expected
Time: 0.1   Position: 1, 1.53, 2.01
Time: 0.2   Position: 1.1, 1.56, 2.02
Time: 0.3   Position: 1.3, 1.59, 2.03
Time: 0.4   Position: 1.6, 1.62, 2.04
Time: 0.5   Position: 2, 1.65, 2.05
Time: 0.6   Position: 2.5, 1.68, 2.06
Time: 0.7   Position: 3.1, 1.71, 2.07
Time: 0.8   Position: 3.8, 1.74, 2.08
Time: 0.9   Position: 4.6, 1.77, 2.09
Time: 1     Position: 5.5, 1.8, 2.1
Time: 1.1   Position: 6.5, 1.83, 2.11
Time: 1.2   Position: 7.6, 1.86, 2.12
Time: 1.3   Position: 8.8, 1.89, 2.13
Time: 1.4   Position: 10.1, 1.92, 2.14
Time: 1.5   Position: 11.5, 1.95, 2.15
Time: 1.6   Position: 13, 1.98, 2.16
Time: 1.7   Position: 14.6, 2.01, 2.17
Time: 1.8   Position: 16.3, 2.04, 2.18
Time: 1.9   Position: 18.1, 2.07, 2.19
Time: 2     Position: 20, 2.1, 2.2
Time: 2.1   Position: 22, 2.13, 2.21
Time: 2.2   Position: 24.1, 2.16, 2.22
Time: 2.3   Position: 26.3, 2.19, 2.23
Time: 2.4   Position: 28.6, 2.22, 2.24
Time: 2.5   Position: 31, 2.25, 2.25
Time: 2.6   Position: 33.5, 2.28, 2.26
Time: 2.7   Position: 36.1, 2.31, 2.27
Time: 2.8   Position: 38.8, 2.34, 2.28
Time: 2.9   Position: 41.6, 2.37, 2.29
Time: 3     Position: 44.5, 2.4, 2.3
*/


return 0;
}
