/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *data1 = head;
        if(data1 == NULL || data1->next == NULL) return false;
        ListNode *data2 = head;
        while(data2 != NULL && data2->next != NULL) {
            data1 = data1->next;
            data2 = data2->next->next;
            if(data1 == data2) return true;
        }
    return false;
        
    }
};