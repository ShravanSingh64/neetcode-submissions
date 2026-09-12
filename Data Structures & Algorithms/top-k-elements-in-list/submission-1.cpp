class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) counts[num]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& [num, f] : counts) {
            buckets[f].push_back(num);   // index = frequency
        }

        vector<int> res;
        for (int i = buckets.size() - 1; i > 0; --i) {
            for (int num : buckets[i]) {
                res.push_back(num);
                if (res.size() == k) return res;
            }
        }
        return res;
    }
};
