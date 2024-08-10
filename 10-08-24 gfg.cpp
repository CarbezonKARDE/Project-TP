class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        Node* prev=NULL, *tail= NULL, *newHead=head;
        for(int i=0;i<k;i++){
            prev=newHead;
            newHead=newHead->next;
        }
        
        if(newHead==NULL) return head;
        prev->next=NULL;
        tail=newHead;
        while(tail->next){
            tail=tail->next;
        }
        tail->next=head;
        return newHead;
        
    }
};
