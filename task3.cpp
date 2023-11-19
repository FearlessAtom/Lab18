#include <stdio.h>
int reversed(int number,int reverse){return (number) ? reversed(number / 10, reverse * 10 + number % 10) : reverse;}
int main(){
    printf("Enter a number : ");int number;scanf("%d",&number);
    printf("Reversed = %d",reversed(number, 0));
    return 0;}