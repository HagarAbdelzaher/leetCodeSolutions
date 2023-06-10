class Solution {
    public int lengthOfLastWord(String s) {
        String [] s2 = s.split(" ");
        return s2[s2.length-1].length();
    }
}