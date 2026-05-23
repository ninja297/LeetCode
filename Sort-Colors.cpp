1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4
5        int start = 0;
6        int mid = 0;
7        int end = nums.size() - 1;
8
9        while(mid <= end) {
10
11            if(nums[mid] == 0) {
12
13                swap(nums[start], nums[mid]);
14                start++;
15                mid++;
16            }
17
18            else if(nums[mid] == 1) {
19
20                mid++;
21            }
22
23            else {
24
25                swap(nums[mid], nums[end]);
26                end--;
27            }
28        }
29    }
30};