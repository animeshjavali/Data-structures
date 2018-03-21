#include <iostream>

using namespace std;
struct node{
char data;
node* link;
};
class sl{
node* head;
public:
    sl(){
    head=NULL;
    }
    void insertion(){
         node* temp=new node;
    cout<<"Enter the character"<<endl;

    cin>>temp->data;
    temp->link=NULL;
    if(head==NULL)
        head=temp;
    else{
        node* ptr=head;
        while(ptr->link!=NULL)
            ptr=ptr->link;
        ptr->link=temp;

    }
    }
    void display(){
    node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->link;
    }
    }
    void deletion(){
        node* previous;
        node* p=head;
    while(p->link!=NULL){
        previous=p;
        p=p->link;
    }
    previous->link=NULL;
    delete p;
    }
};

int main()
{
    sl obj;
    obj.insertion();
    obj.insertion();
obj.deletion();
    obj.display();
    return 0;
}
