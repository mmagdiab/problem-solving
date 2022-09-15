/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode count = head;
        int counter = 1;
        while (count.next != null) {
            counter++;
            count = count.next;
        }
        for (int i = 0;i < counter/2;i++) {
            if (counter % 2 == 0 && i == counter/2) break;
            head = head.next;
        }
        return head;
    }
}