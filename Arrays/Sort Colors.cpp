//Link: https://leetcode.com/problems/sort-colors/

class Solution {
private: void swap(vector <int>& nums, int p1, int p2) {
        int temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
    }
public:
    void sortColors(vector<int>& nums) {
        int i=0, l=0, r=nums.size()-1;
        while( i <= r ) {
            if( nums[i] ==0 ) {
                swap( nums, l++, i++ );
            }
            else if( nums[i] == 2 ) {
                swap( nums, i, r-- );
            }
            else i++;
        }
    }
};
