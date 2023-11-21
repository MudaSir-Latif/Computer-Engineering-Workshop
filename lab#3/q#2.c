
#include<stdio.h>

char reverse(char name[]){
    char *ptr = name;
    for(int i=0;i<8;i++){
        printf("%c",* (ptr+(7-i) ));
    }
}   

int main(){
    
    char name[]="mudassir";
    reverse(name); 
    return 0;
}