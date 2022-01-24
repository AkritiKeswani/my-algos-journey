/* Given the head of a singly linked list, reverse the list, and return the reversed list. */


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
    //first initialize a linked list with 
    ListNode* reverseList(ListNode* head) {
        ListNode* currentPointer = head; // 1
        ListNode* prevPointer = NULL;
        while (currentPointer != NULL) {
            ListNode* nextPointer = currentPointer->next; // 2
            currentPointer->next = prevPointer;
            prevPointer = currentPointer;
            currentPointer = nextPointer;
        }
        return prevPointer;
    }
};