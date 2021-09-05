// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int counts1[1001]{0}, counts2[1001]{0};

        for(auto& n: nums1) ++counts1[n];
        for(auto& n: nums2) ++counts2[n];

        vector<int> in;
        in.reserve( min(nums1.size(), nums2.size()) );

        for(auto i=0; i<1001; ++i) {
            int common_count = min(counts1[i],counts2[i]);
            while( common_count --> 0 ) in.push_back(i);
        }
        
        return in;
    }
};
