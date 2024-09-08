class Solution {
public:
  
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (num_map.count(diff))
            return {num_map[diff], i};
        num_map[nums[i]] = i;
    }
    return {};
}

        
    
};