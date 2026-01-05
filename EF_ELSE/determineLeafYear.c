#include<stdio.h>
int main(){
   
    int n;

    printf("Enter a Year : ");
    scanf("%d",&n);

    if(n%4==0){
        printf("It is Leap Year");
    }
    if(n % 4 != 0){
        printf("Not a Leap Year");
    }
   if(n<=0){
    printf("Not a valid Year!");
   }



    return 0;
}