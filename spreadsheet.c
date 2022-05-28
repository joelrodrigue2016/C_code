#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  FILE * fpointer;
      fpointer = fopen("username.csv","r");
      char spreadSheet[200];

      while(!feof(fpointer)){
      fgets(spreadSheet,20,fpointer);
      fprintf(stderr, "%s\n", spreadSheet);

      fclose(fpointer);

      }



  return 0;
}
