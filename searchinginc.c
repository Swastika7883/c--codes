#include<stdio.h>
//sum of first n numbers
int main() {
    int a , b , j=0;
    printf("enter no1: ");
    scanf("%d" , &a) ;
    for (b=0 ; b<=a ; b++ ){
        printf("%d", b);
    
    }
    printf("\t");

    for (b=1 ; b<=a ; b++ ){
        j=j+b;
    
    
    
}
printf("%d", j);
}