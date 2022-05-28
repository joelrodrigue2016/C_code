#include <stdio.h>

#include <math.h>

struct Car
{
    char brand[50];
    char model[50];
    int year;
};

int	main(int argc, char **argv)
{
    struct Car Car1 = {"Toyota", "Camry", 1952};
    struct Car Car2 = {"Toyota", "Corolla", 1962};
    struct Car Car3 = {"Volvo", "Camry", 1992};
    struct Car Car4 = {"BMW", "X3", 1992};
    struct Car Car5 = {"Tesla", "Tessy", 1959};
    struct Car Car6 = {"Honda", "Accord", 1995};

    /********************************************/
    printf("The Car brand is : %s\n", Car1.brand);
    printf("The Car model is: %s\n", Car1.model);
    printf("The Car year is: %d\n", Car1.year);
    printf("%s", "+----------------------------------+\n");
    /********************************************/
    printf("The Car brand is : %s\n", Car2.brand);
    printf("The Car model is: %s\n", Car2.model);
    printf("The Car year is: %d\n", Car2.year);
    printf("%s", "+---------------------------------+\n");
    /********************************************/
    printf("The Car brand is : %s\n", Car3.brand);
    printf("The Car model is: %s\n", Car3.model);
    printf("The Car year is: %d\n", Car3.year);
    printf("%s", "+---------------------------------+\n");
    /********************************************/
    printf("The Car brand is : %s\n", Car4.brand);
    printf("The Car model is: %s\n", Car4.model);
    printf("The Car year is: %d\n", Car4.year);
    printf("%s", "+---------------------------------+\n");
    /********************************************/
    printf("The Car brand is : %s\n", Car5.brand);
    printf("The Car model is: %s\n", Car5.model);
    printf("The Car year is: %d\n", Car5.year);
    printf("%s", "+---------------------------------+\n");
    /********************************************/
    printf("The Car brand is : %s\n", Car6.brand);
    printf("The Car model is: %s\n", Car6.model);
    printf("The Car year is: %d\n", Car6.year);

    //system("pause");
    return 0;
}
