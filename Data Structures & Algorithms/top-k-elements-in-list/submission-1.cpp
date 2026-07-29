class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> freq;
        for (int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for (auto p : freq){
            pair<int,int> pe = {p.second, p.first};
            v.push_back(pe);
        }
        sort(v.begin(), v.end());
        int sz = v.size();
        vector<int> ans;
        for (int i=0; i<k; i++){
            ans.push_back(v[sz-i-1].second);
        }
        return ans;
    }
};
