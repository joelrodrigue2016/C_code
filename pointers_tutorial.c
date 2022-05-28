#include<stdio.h>
#include<stdlib.h>


int	main(int argc, char **argv)
{
    int age;
    int *age2;

    printf("Please Enter your age: ");

    scanf("%d", &age);
    age2 = &age;

    
    if(age == 1){
        printf("You are %d year old and your age is allocated at %p memory slot.\n", age, age2);
        printf("\n");
    }else{
        printf("You are %d years old and your age is allocated at %p memory slot.\n", age, age2);
        printf("\n");
    }

    system("pause");
    return 0;
}



