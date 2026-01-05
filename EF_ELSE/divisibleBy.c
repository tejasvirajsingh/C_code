//  MY question is that take positive interger input and tell if it is divisible by 5 or Not.

#include<stdio.h>
int main(){

    int n;
    printf("Take a Positive Number: ");
    scanf("%d",&n);

    if(n%5==0){
        printf("It is divisible by 5.");

    }
    else{
        printf("Not divisible by 5.");
    }
    return 0;
}