/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let newArr = nums.sort();
    for (let i=0 ; i<newArr.length -1  ; i++){
        if(newArr[i]==newArr[i+1])
            {
                return true;
            }
    }
     return false;
};