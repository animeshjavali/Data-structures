#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* head=NULL;
int length(){
int count=0;
struct node* temp=head;
while(temp!=NULL){
    count++;
    temp=temp->link;
}
return count;
}
void append(){
struct node* temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
    head= temp;
else{
    struct node* p=head;
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=temp;
}
}
void display(){
struct node* p=head;
while(p!=NULL){
    printf("%d ",p->data);
    p=p->link;
}
printf("\n");
}
void insert_after(){
int loc,count=1;
struct node* p=head;
struct node* temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the node number after which node is to be inserted\n");
scanf("%d",&loc);
printf("Enter the data\n");
scanf("%d",&temp->data);
int len=length();
if(loc>len)
    printf("Node doesn't exist");
else{
    while(count<loc){
        count++;
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
}
}
void swap_nodes(){
    int loc1,loc2,count=1, temp1,temp2,temp3;
printf("Enter the nodes to be swapped\n");
scanf("%d %d",&loc1,&loc2);
struct node* p=head;
while(count<loc1){
    count++;
    p=p->link;
}
temp1=p->data;
count=0;
while(count<loc2){
    count++;
    p=p->link;
}
temp2=p->data;
temp3=temp1;
temp1=temp2;
temp2=temp3;
count=0;
while(count<loc1){
    count++;
    p=p->link;
}
p->data=temp2;
count=0;
while(count<loc2){
    count++;
    p=p->link;
}
p->data=temp1;
}
int main()
{
   append();
   append();
   append();
   display();
   insert_after();
   display();
   swap_nodes();
   display();
    return 0;
}
