
#include<stdio.h>

int main(){
    int first,second,temp;
    printf("Enter the value:");
    scanf("%d",&first);
    printf("Enter the value:");
    scanf("%d",&second);

    int * ptr1 = &first;
    int * ptr2 = &second;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("The swaped first value is: %d\n",first);
    printf("The swaped second value is: %d",second);
}