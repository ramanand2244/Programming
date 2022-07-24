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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* node1 = head;
        if(node1 == NULL) return head;
        
        if(node1->next == NULL) return head;
        ListNode* node2 = NULL;
        
        ListNode* node3 =  NULL;
        
        
        while(node1 != NULL) {
            node2 = node1->next;
            node1->next = node3; // node3 == prev , node1 == current, node2 == next; 
            node3 = node1;
            node1 = node2;
        }
        head = node3 ;
        return head;
    }
};