#include <cstdlib>
#include <cmath>
#include <random>
#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        //sort array <quick sort>
        std::sort(nums.begin(), nums.end());
        //check for duplicates
        if(!(nums.size() > 1)){
            return false;
        }
        for(int i = 1; i <= nums.size()-1; i++){
            if(nums[i-1] == nums[i]){
                return true;
            }
        }
        return false;
        
    }
};