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


struct Node* addlinkedist(struct Node* current1,struct Node* current2)
    {
        struct Node* new=NULL;
        while (current1!=NULL && current2!=NULL){

            if(current1->data<current2->data){
                new=add(new,current1->data);
                current1=current1->next;
            }
            else{
                new=add(new,current2->data);
                current2=current2->next;
            }

            }
        
        while (current1!=NULL)
        {
            new=add(new,current1->data);
            current1=current1->next;
        }
        while (current2!=NULL)
        {
            new=add(new,current2->data);
            current2=current2->next;
        }
        return new;
    }
    


int main(){
    struct Node* lst,* head1=NULL,* head=NULL;
    int i=1;


    head1=createnode(111);
    head=createnode(1110);
    head=add(head,89);
    head1=add(head1,5);
    head1=add(head1,1);
    lst=addlinkedist(head,head1);
    printf("\nThe list: \n");
    while (lst!=NULL)
    {
        printf("%d  ",i);
        printf("%d\n",lst->data);
        lst=lst->next;
        i++;
    }
    free(lst);
    return 1;
    
}