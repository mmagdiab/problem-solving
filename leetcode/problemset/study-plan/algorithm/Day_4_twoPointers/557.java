class Solution {
    public String reverseWords(String s) {
        int slow = 0;
        int fast = 0;
        int lastWhiteSpace = -1;
        StringBuilder sb = new StringBuilder(40);
        while (fast <= s.length()) {
            if (fast == s.length() || s.charAt(fast) == ' ') {
                lastWhiteSpace = fast;
                fast--;
                 while (slow <= fast) {
                    sb.append(s.charAt(fast--));
                }
                if (lastWhiteSpace != s.length()) sb.append(' ');
                fast = lastWhiteSpace;
                slow = lastWhiteSpace + 1;
            }
            fast++;
        }
        return sb.toString();
    }    
}