class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        Map <Character, Integer> hm = new HashMap<Character, Integer>();
        for(int i=0 ; i<jewels.length() ; i++)
        {
            hm.put(jewels.charAt(i) , 1);
        }
        int answer=0;
        for(int i = 0 ; i< stones.length() ; i++)
        {
            if(hm.containsKey(stones.charAt(i)))
            {
                answer++;
            }
        }
        
        return answer;
    }
}