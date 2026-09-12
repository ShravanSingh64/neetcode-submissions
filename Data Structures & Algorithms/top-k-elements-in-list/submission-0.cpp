class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> counts;
        for (const auto& num : nums)
        {
            counts[num]++;
        }
        vector<pair<int, int>> numFrequency;
        for (auto& it : counts)
        {
            numFrequency.push_back(it);
        }

        sort(numFrequency.begin(),numFrequency.end(), [](const pair<int, int>&a, const pair<int,int>&b){
            return a.second > b.second;
        });
        vector <int> result;
        for (int i = 0 ; i < k ; i++)
        {
            result.push_back(numFrequency[i].first);
        }

        return result;

    }
};
