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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=nullptr;
        ListNode* track=nullptr;
        ListNode* head1=list1;
       
        ListNode* head2=list2;
        while(head1 != NULL && head2 != NULL){
            ListNode* tmp1=head1;
            ListNode* tmp2=head2;
            if(ans==nullptr){
                if(tmp1->val<=tmp2->val){
                    ans=tmp1;
                    head1=head1->next;
                }else{
                    ans=tmp2;
                    head2=head2->next;
                }
                track=ans;
            }else{
                if(tmp1->val<=tmp2->val){
                    track->next=tmp1;
                    head1=head1->next;
                }else{
                    track->next=tmp2;
                    head2=head2->next;
                }
                track=track->next;
            }
        }
        if(head1!=nullptr){
            if(track==nullptr){
                ans=head1;
            }else{
                track->next=head1;
            
            }
            
        }
        if(head2!=nullptr){
            if(track==nullptr){
                ans=head2;
            }else{
                track->next=head2;
           
            }
        }
        return ans;
    }
};