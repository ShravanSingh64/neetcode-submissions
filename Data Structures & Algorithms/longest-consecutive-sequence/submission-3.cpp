class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numSet(nums.begin(), nums.end());
       int result = 0;
       
       for (int n : numSet) {
            // only start counting if n is the beginning of a sequence
            if (numSet.find(n - 1) != numSet.end()) continue;

            int streak = 1;
            while (numSet.find(n + streak) != numSet.end()) {
                streak++;
            }
            result = max(result, streak);
        }

       return result;
    }
};
