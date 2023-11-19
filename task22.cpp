#include <stdio.h>
double fact(int number,double sum){
    if(number == 0){return sum;}
    double factorial = 1;
    for(int index = 1;index <= number;index++){factorial = factorial * index;}
    return fact(number - 1, sum + 1.0 / factorial);}
int main() {
    printf("Enter a number: ");int number;scanf("%d", &number);
    if(number < 0){printf("Invalid user input!");return 1;}
    printf("Sum = %lf\n", fact(number,0));
    return 0;}