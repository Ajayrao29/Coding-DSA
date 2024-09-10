class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int, int> map;
        vector<int> indices;
        for (int i = 0; i < a.size(); ++i) {
            int match = target - a[i];
            if (map.find(match) != map.end()) {
                indices.push_back(map[match]);
                indices.push_back(i);
                return indices;  
            }
            map[a[i]] = i;  
        }
        return indices;  
    }
};
 