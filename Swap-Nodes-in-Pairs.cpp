1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* swapPairs(ListNode* head) {
14        
15        ListNode d(0);
16        d.next = head;
17        
18        ListNode* prev = &d;
19
20        while (prev->next && prev->next->next) {
21            ListNode* first = prev->next;
22            ListNode* second = first->next;
23
24            first->next = second->next;
25            second->next = first;
26            prev->next = second;
27
28            prev = first;
29        }
30
31        return d.next;
32    }
33};
34