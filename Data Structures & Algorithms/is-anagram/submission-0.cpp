class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> map_s;

        for (auto chars : s)
        {
            map_s[chars]++;
        }

        for (auto chars : t)
        {
            map_s[chars]--;
        }

        for ( auto& [c, n] :  map_s)
        {
            if (n!=0)
            {
                return false;
            }
        }

        return true;
    }
};
