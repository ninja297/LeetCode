1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7
8        for(int i = 0; i < nums.size() - 2; i++) {
9
10            if(i > 0 && nums[i] == nums[i - 1])
11                continue;
12
13            int left = i + 1;
14            int right = nums.size() - 1;
15
16            while(left < right) {
17
18                int sum = nums[i] + nums[left] + nums[right];
19
20                if(sum == 0) {
21
22                    ans.push_back({nums[i], nums[left], nums[right]});
23
24                    left++;
25                    right--;
26
27                    while(left < right && nums[left] == nums[left - 1])
28                        left++;
29
30                    while(left < right && nums[right] == nums[right + 1])
31                        right--;
32                }
33                else if(sum < 0) {
34                    left++;
35                }
36                else {
37                    right--;
38                }
39            }
40        }
41
42        return ans;
43    }
44};