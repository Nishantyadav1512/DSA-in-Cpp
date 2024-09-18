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
    bool isPalindrome(ListNode* head) {
        vector<int> lol;
        ListNode* temp = head;
        while(temp != NULL){
            lol.push_back(temp->val);
            temp = temp->next;
        }

         int i = 0;
    int k = lol.size() - 1;
    while (i < k) {
        if (lol[i] != lol[k]){
            return false;}
        else {
            i = i + 1;
            k = k - 1;
        }
    }
    return true;
}

};