//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/


#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number a : ");
    scanf("%d", &a);
    printf("enter the number b : ");
    scanf("%d", &b);
    printf("THE SUM IS : %d \n", a + b);
    printf("THE DIFFEERENCE IS : %d \n", a - b);
    printf("THE PRODUCT IS : %d \n", a * b);
    printf("THE  QUOTIENT IS : %d \n", a/b);
    return 0;
    

}