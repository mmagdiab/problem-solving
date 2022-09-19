/* Given a string s, find the length of the longest substring without repeating characters. */
class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> arr = new HashSet<Character>();
        int start = 0;
        int end = 0;
        int result = 0;
        while (end < s.length()) {
            if (arr.contains(s.charAt(end))) {
                while (s.charAt(start) != s.charAt(end)) {
                    arr.remove(s.charAt(start++));
                }
                 arr.remove(s.charAt(start++));
            }
            arr.add(s.charAt(end));
            result = (end - start + 1> result) ? end - start + 1: result;
            end++;
        }
        return result;
    }
}