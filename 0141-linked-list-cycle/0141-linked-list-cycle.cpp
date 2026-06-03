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
        if(head == nullptr || head ->next == nullptr) return false ;
            ListNode *rab = head;
            ListNode *tur = head;
        while(rab != nullptr && rab -> next != nullptr) {
            rab = rab -> next -> next;
            tur = tur -> next;

            if(tur == rab) {
                return true;
            }

        }
        return false; 
    }
};