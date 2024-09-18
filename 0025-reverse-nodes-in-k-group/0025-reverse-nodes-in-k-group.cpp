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
    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    int count = 0;

    // Count the number of nodes in the list
    ListNode* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    // If the number of nodes is less than k, return the original list
    if (length < k) {
        return head;
    }

    // Reverse the first 'k' nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recurse for the remaining part
    if (next != NULL) {
        head->next = reverseKGroup(next, k);
    }

    // Return the new head of the reversed group
    return prev;
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(vector<int>& arr) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    for (int val : arr) {
        curr->next = new ListNode(val);
        curr = curr->next;
    }
    return dummy->next;
}

};
