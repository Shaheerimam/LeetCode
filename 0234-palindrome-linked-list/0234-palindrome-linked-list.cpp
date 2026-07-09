/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insertAtTail(ListNode* &head,ListNode* &tail,int val){
        ListNode* tmp=new ListNode(val);
        if(head==NULL){
            head=tmp;
            tail=tmp;
            return;
        }
        tail->next=tmp;
        tail=tmp;
    }
    void reverse(ListNode* &head,ListNode* tmp){
        if(tmp->next==NULL){
            head=tmp;
            return;
        }
        reverse(head,tmp->next);
        tmp->next->next=tmp;
        tmp->next=NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        ListNode* tmp=head;
        while(tmp!=NULL){
            insertAtTail(newhead,newtail,tmp->val);
            tmp=tmp->next;
        }
        reverse(head,head);
        ListNode* tmp2=head;
        ListNode* tmp3=newhead;
        while(tmp2!=NULL){
            if(tmp2->val!=tmp3->val){
                return false;
                break;
            }
            tmp2=tmp2->next;
            tmp3=tmp3->next;
        }
        return true;
    }
};