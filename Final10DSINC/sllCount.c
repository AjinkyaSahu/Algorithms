#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *link; 

};
struct node *head=NULL;
struct node *temp;


void insert(struct node **head,int num){

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->link=NULL;

    if ((*head)==NULL)
    {
            (*head)=temp=newnode;
            return;
    }
    else{

        temp->link=newnode;
        temp=newnode;
    }
    
}

int display(struct node **head){

    printf("Elements are: ");
    int count=0;
    struct node *te;
    te=(*head);

    while (te!=NULL)
    {
        count++;
        printf("%d ",te->data);
        te=te->link;
    }

    return count;


}

int main(){

int num,ans;
char str[10];

    do
    {
        /* code */
        printf("Enter element\n");
        scanf("%d",&num);
        insert(&head,num);

        printf("Do you want to continue?? YES or NO\n ");
        scanf("%s",str);



    } while (str[0]=='y'||str[0]=='Y');


    ans=display(&head);
    printf("\nCount = %d\n",ans);
    



    return 0;
}