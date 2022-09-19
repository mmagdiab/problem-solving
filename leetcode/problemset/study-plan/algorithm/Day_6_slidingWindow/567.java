/* Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s */
class Solution {
    public boolean checkInclusion(String s1, String s2) {
    HashMap<Character, Integer> map1 = new HashMap<>();
    HashMap<Character, Integer> map2 = new HashMap<>();
        if (s1.length() < s2.length()) return false;
        for (int i = 0; i < s1.length(); i++) {
            map1.put(s1.charAt(i), map1.getOrDefault(s1.charAt(i), 0)+1);
            map2.put(s2.charAt(i), map2.getOrDefault(s2.charAt(i), 0)+1);
        }
        if (matches(map1, map2)) return true;
        int rear = 0;
        for (int i = s1.length(); i < s2.length(); i++) {
            map2.put(s2.charAt(i), map2.getOrDefault(s2.charAt(i), 0)+ 1);
            map2.put(s2.charAt(rear), map2.get(s2.charAt(rear))- 1);
            if (map2.get(s2.charAt(rear)) < 0) {
                map2.remove(s2.charAt(rear));
            }
            if (matches(map1, map2)) return true;
            rear++;
        }
                return false;
    }
    public boolean matches(HashMap<Character, Integer> map1, HashMap<Character, Integer> map2) {
        for (char key: map1.keySet()) {
            if (map1.get(key) - map2.getOrDefault(key, 0) != 0) return false;
        }
        return true;
    }
}