
#include<stdlib.h>
#include <stdio.h>

/*Create the function here*/
void myFunction(char name[]){
    printf("Hi %s, How can I help you Today? \n", name);
}

/*Code here*/
int	main(int argc, char **argv)
{

    /*USE your function here*/
    myFunction("Joel");
    myFunction("Moises");
    myFunction("Angel");
    myFunction("Antoine");
    myFunction("Sarai");


    system("pause");
    return 0;
}




