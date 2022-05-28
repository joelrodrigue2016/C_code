
#include<stdio.h>
#include<string.h>
#include<math.h>

int main (void)
{

   float distance, time, velocity;

    printf("Enter the first value:");
    scanf("%f", &distance);

    printf("Enter the second value:");
    scanf("%f", &time);

    velocity = distance/time;

    printf("%f / %f = %f meters per second\n", distance, time, velocity);

    return 0;
}
