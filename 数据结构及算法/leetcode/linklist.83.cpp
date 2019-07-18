/*************************************************************************
	> File Name: linklist.83.cpp
	> Author   : HzqRomon
	> Mail     : sunsethzq@gmail.com
	> Created Time: 2019年07月18日 星期四 17时16分10秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head, *q;
    while (p && p->next) {
        if (p->next && p->val == p->next->val)
            p->next = p->next->next;
        else
            p = p->next;
    }
    return head;
}


