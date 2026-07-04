class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int Duplicate=0;
        sort(nums.begin(),nums.end());
        if (nums.size()==0){
            Duplicate=0;
        }
        else {
            for (int i=0;i<nums.size()-1;i++){
                if (nums[i]==nums[i+1]){
                    Duplicate=1;
                    break;
            }

        }
            if (Duplicate==1){
                return true;
        }
            else {
                return false;
        }
    }
    return false;
}
};