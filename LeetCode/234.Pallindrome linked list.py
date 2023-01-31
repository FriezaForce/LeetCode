class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        slow = fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        

        prev = None
        while slow:
            temp = slow.next
            slow.next = prev
            prev = slow
            slow = temp
        

        while prev and head:
            if prev.val != head.val:
                return False
            prev = prev.next
            head = head.next
        
        return True
