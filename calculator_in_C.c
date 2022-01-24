#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void addition(){

    system("@cls||clear");
    double number1, number2;

    printf("Enter a number: ");
    scanf("%lf", &number1);

    printf("Enter a number: ");
    scanf("%lf", &number2);

    printf("%lf + %lf = %f\n\n", number1, number2, number1 + number2);
}

void subtraction(){ 

    system("@cls||clear");
    double number1, number2;

    printf("Enter a number: ");
    scanf("%lf", &number1);

    printf("Enter a number: ");
    scanf("%lf", &number2);

    printf("%lf - %lf = %f\n\n", number1, number2, number1 - number2);
}

void multiplication(){      

    system("@cls||clear");
    double number1, number2;

    printf("Enter a number: ");
    scanf("%lf", &number1);

    printf("Enter a number: ");
    scanf("%lf", &number2);

    printf("%lf x %lf = %f\n\n", number1, number2, number1 * number2);
}

void division(){

    system("@cls||clear");
    double number1, number2;

    printf("Enter a number: ");
    scanf("%lf", &number1);

    printf("Enter a number: ");
    scanf("%lf", &number2);

    printf("%lf / %lf = %f\n\n", number1, number2, number1 / number2);
}

void square(){

    system("@cls||clear");
    double number1, resu;

    printf("Enter a number: ");
    scanf("%lf", &number1);

    resu = sqrt(number1);

    printf("Square root %lf = %.5lf\n\n", number1, resu);
}

void prime_number(){

    system("@cls||clear");
    int i, aux = 0;
    long long int number1;

    printf("Enter a number: ");
    scanf("%lld", &number1);

    for (i = 1; i <= number1; i++){

        if (number1 % i == 0){
            aux++;
        }
    }

    if (aux <= 2){
        printf("\nNumber is a prime\n\n");
    }else{
        printf("\nNumber is not a prime\n\n");
    }
}

void allprime_number(){

    system("@cls||clear");
    int i, n, nprime = 0, aux = 0;
    long long int number;

    printf("Enter a number: ");
    scanf("%lld", &number);

    for (n = 1; n <= number; n++){

        aux = 0;

        for (i = 1; i <= n; i++){

            if (n % i == 0){
                aux++;

            }
            if (aux > 2){
                break;
            }
        }
        if (aux <= 2){
            printf("\n%d is a prime number", n);
            nprime++;
        }
    }

    printf("\n\n-------------------------------------------------\n");
    printf("There is %d prime numbers in between 1 and %d\n\n", nprime, number);
}

void allsquare(){

    system("@cls||clear");
    double number, square;
    int n, i;

    printf("Enter a number: ");
    scanf("%lf", &number);

    for (i = 1; i <= number; i++){
        square = sqrt(i);
        printf("Square root of %d is %.5f\n", i, square);
    }
    printf("\n");
}

int main(void){

    int op;

    while (op != 9){

        printf(" 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division\n 5-Square Root");
        printf("\n 6-Find out if it is prime\n 7-Find all prime numbers up to a number");
        printf("\n 8-All square roots up to a number\n 9-Close the program\n\n Number: ");
        scanf("%d", &op);

        switch (op){
            case (1):
                addition();
                break;

            case (2):
                subtraction();
                break;

            case (3):
                multiplication();
                break;

            case (4):
                division();
                break;

            case (5):
                square();
                break;

            case (6):
                prime_number();
                break;

            case (7):
                allprime_number();
                break;

            case (8):
                allsquare();
                break;

            case (9):
                system("@cls||clear");
                printf("Leaving...\n\n");
                break;

            default:
                printf("\nInvalid number\n\n");
                break;
        }
    }
    return 0;
    getch();
}
