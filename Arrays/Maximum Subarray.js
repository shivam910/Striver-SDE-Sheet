/**
 * @param {number[]} nums
 * @return {number}
 
 Link https://leetcode.com/problems/maximum-subarray/
 */


var maxSubArray = function(nums) {
    let sum=0, maxi= -Infinity;
    for(let i=0; i<nums.length; i++) {
        sum = Math.max(nums[i], sum + nums[i]);
		// Update max if new higher value found
        if(sum > maxi) maxi = sum;
    }
    return maxi;
};
