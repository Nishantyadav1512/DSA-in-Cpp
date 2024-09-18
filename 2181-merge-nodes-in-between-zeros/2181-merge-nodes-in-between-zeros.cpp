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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* lol = head->next;
        int sum = 0;
        while( lol != NULL ){
            if(lol->val == 0){
                if(sum>0){
                    temp->next = new ListNode(sum);
                    temp = temp->next;
                }
                sum = 0;
                }
                else{
                    sum += lol->val;
                }
                lol = lol->next;
            } 
        return dummy->next;
    }
};