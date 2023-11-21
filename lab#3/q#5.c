#include<stdio.h>

int main(){
    int array1[2][3]={{1,2,3},{4,5,6}},array2[2][3]={{1,2,3},{4,5,6}};
    int *ptr1,*ptr2;
    ptr2=&array2[0][0];
    ptr1=&array1[0][0];
    for(int i=0;i<6;i++){
        *(ptr1+i)=*(ptr1+i)+*(ptr2+i);
    }
    for(int i=0;i<6;i++){
        if(i==3){
            printf("\n");
            printf("%d ",*(ptr1+i));
        }
        else{
            printf("%d ",*(ptr1+i));
        }
    }
}
