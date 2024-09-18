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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL && temp->val == val){
            head = temp->next;
            delete temp;
            temp = head;
        }
            while(temp != NULL){
            if(temp->val == val){
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
                temp = prev->next;
            }
            else{
            prev= temp;
            temp = temp->next;
            }
            
        }
        return head;
        
    }
};