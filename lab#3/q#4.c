#include<stdio.h>
#include<string.h>

int main(){
    char tar,check='b';
    printf("Enter the targetted value: ");
    scanf("%c",&tar);
    char *ptr1=&tar;
    char array[]={'a','c','y','o','p','w','q','z','\0'};
    char *ptr=array;
    for(int i=0;i<strlen(array);i++){
        if(*(ptr + i)==*ptr1){
            printf("The index of the searched value is: %d",i);
            break;}
        else if (*(ptr + i)!=*ptr1 && i==(strlen(array)-1)){check ='a';}
        if(check=='a'){printf("Value not found!!");}
    }
    return 0;
}