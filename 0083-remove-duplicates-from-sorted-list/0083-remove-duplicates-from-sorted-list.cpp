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
    ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode* current = head;
    ListNode* prev = head;
    ListNode* temp = current->next;

    while(current!=NULL){
        prev = current;
        temp = current->next;
        while(temp!=NULL&&current->val == temp->val){
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        
        current = current->next;
    }
    return head;
    }
};