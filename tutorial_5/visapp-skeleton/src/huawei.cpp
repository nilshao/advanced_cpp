//单向链表插入一个节点，按序插入


# include <iostream>


struct Node{
    int val;
    Node *next;
};

Node *insert(Node *head, Node *num){
    // head nullptr
    if(head ==NULL){
        return num;
    }

    Node *p0, *p1;
    p1 = nullptr;
    p0 = head;

    if(p0->val >= num->val){
        num->next = head;
        return num;
    }

    while(p0->next !=NULL){
        if(p0->next->val <= num->val){
            p0 = p0->next;
        }
        else{break;}

    }// 插到p0houmian
    if(p0->next != NULL){
        p1 = p0->next;
    }

    // chain: p0->num->p1 if p1
    p0->next = num;
    if(p1!=NULL){
        num->next = p1;
    }

    return head;
}

int main(){
    
}
