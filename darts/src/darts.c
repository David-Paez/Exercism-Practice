#include "darts.h"
#include "math.h"


int score(coordinate_t coordinates)
{
    float distance = sqrt(pow(coordinates.x, 2) + pow(coordinates.y, 2));
    int score = 0;

    if (distance > 10){
        score = 0;
    }

    if(distance <= 1){
        score = 10;
    }
    else if(distance <= 5){
        score = 5;
    }
    else if(distance <= 10){
        score = 1;
    }

    return score;
}
