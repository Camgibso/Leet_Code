// Cameron Gibson
// Solution for: Two Sum 
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        // Create a for loop to traverse through i
        for (int i=0; i < nums.size(); i++){
            // Start j one ahead of i
            for (int j = i+1; j < nums.size(); j++){
                // If sum equals target, return the answer
                if (nums[i] + nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }    
        return v;
    }
};
