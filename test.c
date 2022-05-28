#include <stdio.h>
int main(int argc, char const *argv[]) {
  float velocity, distance,time;

  printf("Enter your distance and then your time (in that order): ");
  scanf("%f %f", &distance,&time );


  ///float d = a*b-c+a*c;
  velocity = distance/time;



  printf("if your distance is %f meters, and your time is %f seconds, then your velocity is %f meters/seconds",distance,time,velocity);


   return 0;
}
