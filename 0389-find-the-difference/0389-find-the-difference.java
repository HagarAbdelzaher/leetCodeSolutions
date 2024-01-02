class Solution {
    public char findTheDifference(String s, String t) {
        
        char tempS[] = s.toCharArray();
        Arrays.sort(tempS);
        
        char tempT[] = t.toCharArray();
        Arrays.sort(tempT);
        for(int i=0 ; i<s.length() ; i++)
        {
            if(tempS[i]!= tempT[i])
                return tempT[i];
        }
        
        return tempT[t.length()-1];
    }
}