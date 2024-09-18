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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
      vector<ListNode*> roleA;
      vector<ListNode*> roleB;
      ListNode* tempA = headA;
      ListNode* tempB = headB;
      while(tempA != NULL){
         roleA.push_back(tempA);
         tempA = tempA->next;
      }
      while(tempB != NULL){
         roleB.push_back(tempB);
         tempB = tempB->next;
      }
      int indexA = roleA.size() - 1;
      int indexB = roleB.size() - 1;
 ListNode* intersectionNode = nullptr;
       while (indexA >= 0 && indexB >= 0 && roleA[indexA] == roleB[indexB]) {
            // Update intersectionNode to the current common node
            intersectionNode = roleA[indexA];
            // Move to the previous node in both vectors
            indexA--;
            indexB--;
        }

        // Return the intersection node or nullptr if there is no intersection
        return intersectionNode;
    }


};
