/*************************************************************************
	> File Name: linklist.141.cpp
	> Author   : HzqRomon
	> Mail     : sunsethzq@gmail.com
	> Created Time: 2019年07月18日 星期四 17时19分51秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false;
    struct ListNode *slow = head, *fast = head;
    while (fast) {
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL) return false;
        fast = fast->next;
        if (slow == fast) return true;
    }
    return false;
}
