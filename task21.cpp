#include <stdio.h>
double factorial(int number){
    double sum = 0;
    for(int index = 1;index <= number;index++){
        int factorial = 1;
        for(int j = 1;j <= index;j++){factorial = factorial * j;}
    sum = sum + 1.0 / factorial;}
    return sum;}
int main(){
    printf("Enter a number : ");int number;scanf("%d",&number);
    if(number <= 0){printf("Invalid user input!");return 1;}
    printf("Sum = %lf", factorial(number));
    return 0;}