#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("It's Even Number.");
    }
    else{
        printf("It's Odd Number.");

    }

    return 0;
}