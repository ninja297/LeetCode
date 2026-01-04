1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int low = 0, high = nums.size() - 1;
5        
6        while (low <= high) {
7            int mid = low + (high - low) / 2;
8            
9            if (nums[mid] == target)
10                return mid;
11            else if (nums[mid] < target)
12                low = mid + 1;
13            else
14                high = mid - 1;
15        }
16        
17        return low;  
18    }
19};
20