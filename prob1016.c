// /Two cars (X and Y) leave in the same direction. 
// The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.
//  In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, 
// in other words, it can get away one kilometer for each 2 minutes.
// Read the distance (in km) and calculate how long it takes (in minutes) 
// for the car Y to take this distance in relation to the other car.

#include<stdio.h>
int main(){
    int distance, time;
    scanf("%d", &distance);

    time = distance * 2;
    printf("%d minutos\n", time);
    return 0;
 }

 //Understanding the Problem

// Two cars (X and Y) travel in the same direction.
// Speed of Car X = 60 km/h.
// Speed of Car Y = 90 km/h.

// The relative speed of Car Y with respect to X:
// 90−60=30 km/h

// This means Car Y decreases the gap at a rate of 30 km per hour.
// Conversion:

// 30 km in 60 minutes ⇒ 1 km in 60/30=2 minutes

// If we are given a distance D (in km), the time required is:
// Time=D×2 minutes
