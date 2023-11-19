#include <stdio.h>
double domain(int array[], int length, int count, int sum) {
	return (count < length) ? domain(array, length, count + 1, sum = sum + array[count]) : (double)sum / length;}
int main() {
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(array) / sizeof(array[0]);
	printf("Domain of the array : %.2lf", domain(array, length, 0, 0));
	return 0;}