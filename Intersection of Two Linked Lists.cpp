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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;

        int lenA = get_length(headA);
        int lenB = get_length(headB);
        if(lenA > lenB)
        {
            for(int i =0; i<(lenA-lenB); ++i) headA = headA->next;
        }
        else
        {
             for(int i =0; i<(lenB-lenA); ++i) headB = headB->next;
        }
        while(headA && headB && (headA != headB))
        {
            headA = headA->next;
            headB = headB->next;
        }
        return (headA && headB)? headA : NULL;
    }

    int get_length(ListNode* head)
    {
        int counter = 0;
        while(head != NULL)
        {
            ++counter;
            head = head->next;
        }
        return counter;
    }

};


// Another solution
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode* a = headA;
        ListNode* b = headB;
        while(a != b)
        {
            a = a == NULL? headB : a->next;
            b = b == NULL? headA : b->next;
        }
        return a;
    }
};
