#include <iostream>

using namespace std;
struct node{
int data;
node* link;
};
class sl{
node* head;
public:
    sl(){
    head=NULL;
    }
    void insert_begin(){
    node* temp=new node;
    cout<<"Enter the data"<<endl;
    cin>>temp->data;

    if(head==NULL){
            head=temp;
            temp->link=NULL;}

    else
    {
        temp->link=head;
        head=temp;
    }
    }
    void display(){
    node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->link;
    }

    }
};
int main()
{
    sl obj;
obj.insert_begin();
obj.insert_begin();
obj.insert_begin();
obj.insert_begin();
obj.display();
    return 0;
}
