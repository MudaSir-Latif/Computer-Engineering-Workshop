#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of elements you want to make array of: ");
    scanf("%d",&n);
    int arr[n],*ptr;
    ptr = arr;
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&*(ptr +i));
    }
    for(int i=0;i<n;i++){
        printf("The %d element: %d\n",i+1,*ptr);
        ptr++;
    }
    return 0;
}