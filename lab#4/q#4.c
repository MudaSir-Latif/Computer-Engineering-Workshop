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
int main(){
    struct Node* head=NULL,*prev=NULL,*current=NULL;
    head=createnode(40);
    head=add(head,10);
    head=add(head,3);
    current=head;
    int index=0,i=1;

    //removing the nodes at the odd indices
    while (current!=NULL)
    {   if (index %2 != 0)
        {
            prev->next=current->next;
            free(current);
            current=prev->next;
        }
        else{
        prev=current;
        current=current->next;
        }
        index++;
    }

    //printing the modified linkedlist
    current=head;
    printf("The updated linked list is: \n");
    while (current!=NULL)
    {
        printf("%d -> %d\n",i,current->data);
        current=current->next;
        i++;
    }

    //deleting the linkedlist

    while (head!=NULL)
    {
        struct Node* pre=head->next;
        free(head);
        head=pre;
    }
    
}