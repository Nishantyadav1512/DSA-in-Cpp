class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        std::vector<int> uniqueNumbers;
        for (const auto& pair : counts) {
            if (pair.second == 1) {
                uniqueNumbers.push_back(pair.first);
            }
        }

        return uniqueNumbers;
    }
};
