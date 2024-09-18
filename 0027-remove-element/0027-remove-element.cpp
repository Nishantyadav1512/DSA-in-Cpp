class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      
        vector<int> lol;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != val){
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};