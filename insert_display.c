#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* head=NULL;
void append(){

struct node* temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL){
   head=temp;
}
else{
    struct node* temp1=head;
    while(temp1->link !=NULL){
      temp1=temp1->link;
    }
    temp1->link=temp;
}
}
void display(){
if(head==NULL){
    printf("NO linked list\n");
}
else{
        struct node* temp1=head;
    while(temp1!=NULL){
        printf("%d-> ",(temp1->data));
        temp1=temp1->link;
    }
}
}
int main()
{
    append();
    append();
    append();
    append();
display();
    return 0;
}
