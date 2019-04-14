//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_l = 0;
	    int n = nums.size();
	    for(int i=0;i<n;++i){
		    if(nums[i]==1){
			    int current_len = 1;
                int r = i+1;
			    while(r<n&&nums[r]==1){
				    ++current_len;
				    ++r;
		    	}
			    max_l = max(max_l,current_len);
	    	}
	    }
	    return max_l;
    }
};
