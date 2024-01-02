class Solution {
    public char findTheDifference(String s, String t) {
        
      return (char) (getAsciiSum(t)-getAsciiSum(s));
    }
    
    public int getAsciiSum (String str){
        int sum = 0;
        for(int i=0 ; i<str.length() ; i++)
        {
            sum+= str.charAt(i);
        }
        
        return sum;
    
    }
}