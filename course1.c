#include <stdio.h>  /*.h means header file , std means standard*/
#include <stdlib.h>

/*int	main(int argc, char **argv)
{


    char testGrade = 'A';
    char name[] = "Joel";
    short age0 = 10;
    int age1 = 20;
    long age2 = 30;    ///32-bits
    long long age3 = 40; //64 bits

    float gpa0 = 2.5;
    double gpa1 = 3.5;   
    long double gpa2 = 3.5;

    const int isTall;
    isTall == 1;

    testGrade = 'F';
  /*  printf("Hello\n");
    printf("World\n");
    printf("!\n");*/
   /* printf("\n");
    printf("%s, your grade is %c \n",name,testGrade);
    printf("\n");

    printf("\n");
    printf("%s, your grade is %c \n", name, testGrade);
    printf("\n");
/*POINTERS*/
 /*   int num = 10;

    printf("\n");
    printf("%p \n", &num);  /*The result is a memory value not the actual number*/
   /* printf("\n");
    int *pNum = &num;
    printf("\n");
    printf("%d \n", *pNum); /*The result is a memory value not the actual number*/
    /*printf("\n");
    
    printf("\n");
    printf("%d \n", 2*3); /*The result is a memory value not the actual number*/
    /*printf("\n");

    /*printf("\n");
    printf("%d \n", 10 % 3); /*The result is a memory value not the actual number*/
    /*printf("\n");

    printf("\n");
    printf("%d \n", 1+2*3); /*The result is a memory value not the actual number*/
    /*printf("\n");

    printf("\n");
    printf("%f \n", 10/3.0); /*The result is a memory value not the actual number*/
    /*printf("\n");

    int num2 = 10;
    num2 +=100;
    printf("%d \n" ,num2);

    num2++;

    printf("\n");
    printf("%d \n", num2); /*The result is a memory value not the actual number*/
    /*printf("\n");
*/

    /*User Input*/
    char name2[10];
    
   /* printf("Enter your name: ");
    fgets(name2,10,stdin);
    printf("Hello %s! \n", name2);

    int age_;
    printf("Enter your age: ");
    scanf("%d", &age_);
    printf("You are  %d ", age_);
    printf(" years old. \n");
    

    /*ARRAYS*/

   /* int luckyNumbers[] = {4,8,15,16,23,42};

    int luckyNumbers2[6];
    luckyNumbers2[0] = 90;

    printf("%d \n", luckyNumbers2[0]);
    printf("%d \n", luckyNumbers2[1]);


    int numberGrid[2][3] = {{1,2,3},{4,5,6}};
    numberGrid[0][1] = 99;

    printf("%d\n",numberGrid[0][0]);;
    printf("%d\n",numberGrid[0][1]);*/


    int addNumbers(int num1,int num2)
    {
      return num1 + num2;     
    
    }

    int main(){
      int sum = addNumbers(4,60);
      printf("%d \n", sum);

      return 0;
    }
    


    


    
    
    
    /*/*https://www.youtube.com/watch?v=3lQEunpmtRA&t=293sjhfjhgfjhgfjhgjhgjhg*/
   /* system("pause");
    return 0;
}*/

