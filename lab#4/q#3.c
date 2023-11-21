#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createnode(int data){
    struct Node *newnode=malloc(sizeof(struct Node));
    if (newnode!=NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
    }
    else
    {
        printf("Memory allocation problem!!!");
    }
    return newnode;
}

struct Node* add(struct Node* head,int data){
    struct Node* newnode=createnode(data);
    newnode->next=head;
    head=newnode;
    return head;
}
int* arrraytolinkedlist(struct Node* head,int* size){
    int count=0;
    int* array;
    struct Node* current=head;
    while (current!=NULL)
    {
        count++;
        current=current->next;
    }
    array=(int*)malloc(sizeof(int)*count);
    current=head;
    if(array!=NULL){
        for(int i=0;i<count;i++)
        {
            array[i]=current->data;
            current=current->next;
        }}
    else
    {
        printf("Memory alocation problem!!!");
    }  
    *size=count;
    return array; 
}


int  main(){
    struct Node* current,* head=NULL;
    int size;
    head=createnode(444);
    head=add(head,10355);
    head=add(head,14);
    head=add(head,1);
    int* array=arrraytolinkedlist(head,&size);
    //printing the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }  free(array);
    
    return 0;
}