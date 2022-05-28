#include <stdio.h>

#include<math.h>
int main(int argc, char const *argv[])
{
    float distance,time, velocity;

    printf("Please enter distance and time: ");
    scanf("%f %f", &distance, &time);

    // calculating velocity
    velocity = distance / time;

    printf("the distance is %f meters and the time is %f therefore velocity/time is %f m/s", distance, time, velocity);

    return 0;
}


