#include<stdio.h>

int main(){
    int arr[5] = {4,3,2,8,6};
    int i,j,key;

    // Loop form Second element to last it.

    for(i = 1; i<5; i++)
    {
        key=arr[i];
        j = i - 1;


        while(j >= 0 && arr[j]  > key){
            arr[j + 1] = arr[j];
            j--;

        }
        arr[j+1] = key;

    }
    printf("Sorted Array : ");
    for(i= 0; i<5;i++){
        printf("%d ", arr[i]);
    }
    return 0;

}