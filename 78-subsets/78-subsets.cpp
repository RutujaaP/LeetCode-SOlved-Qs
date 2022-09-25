class Solution {
public:
   void getSubsets (int index, vector<int>& nums, vector<vector<int>> &ans, vector<int> &temp){
    if(index >= nums.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[index]);
    getSubsets(index+1, nums, ans, temp);
    
    temp.pop_back();
    getSubsets(index+1, nums, ans, temp);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    getSubsets(0, nums, ans, temp);
    return ans;
}
};