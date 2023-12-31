
// Happy New Year------>2024

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> store;

        int i = 0, j = 0;

        while (i < m && j < n) {
            (nums1[i] <= nums2[j]) ? store.push_back(nums1[i++])
                                   : store.push_back(nums2[j++]);
        }

        while (i < m)
            store.push_back(nums1[i++]);

        while (j < n)
            store.push_back(nums2[j++]);

        copy(store.begin(), store.end(), nums1.begin());

        return;
    }
};