#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>99 && n<999){
        printf("It is Three Digit Numbers: ");
       
    }
    else{
        printf("It is not Three Digit Number: ");


    }
    return 0;
}