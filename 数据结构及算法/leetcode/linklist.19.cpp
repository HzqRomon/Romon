/*************************************************************************
	> File Name: 19.cpp
	> Author   : HzqRomon
	> Mail     : sunsethzq@gmail.com
	> Created Time: 2019年07月17日 星期三 13时42分08秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p = &ret, *q = head;
    ret.next = head;
    while (n--) {
        q = q->next;
    }
    while (q) {
        q = q->next;
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}
