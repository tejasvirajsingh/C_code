// Take a num which is divisible by 5 and 3. using operartor.


#include<stdio.h>
int main(){
  
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n % 3==0  || n % 5==0 ){
        printf("It is Divisible by 5 or 3 Numbers: ");
       
    }
    else{

        printf("It is not not divisible by 5 and 3 Number: ");


    }
    return 0;
}
