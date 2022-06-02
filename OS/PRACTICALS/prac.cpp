class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=null;
    }
};
void instt(node* &head ,int val){
    node* n=new node(n);
    if(head==null){
        head=n;
        return;
    }
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}