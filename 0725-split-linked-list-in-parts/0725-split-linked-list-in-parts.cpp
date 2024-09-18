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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
    vector<ListNode*> result(k , NULL); 
    ListNode* temp = head;
    int cnt = 0;
    while(temp!= NULL){
        cnt++;
        temp = temp ->next;
    }
    int size = cnt/k;
    int extraNode = cnt%k;
    temp = head;

    for(int i = 0 ; i < k  ; i++){
            result[i] = temp;

            int partsize = size + (extraNode >0 ? 1:0);
            extraNode--;
            for(int j = 1 ;j < partsize ; j++){
                if(temp !=NULL){
                    temp = temp->next;
                }

            }
            if(temp!=NULL){
                ListNode* nextpart = temp->next;
                temp->next = NULL;
                temp = nextpart;
            }
    }

    return result;


    
    }
};