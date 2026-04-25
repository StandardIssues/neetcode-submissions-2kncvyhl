#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, vector<int>> myMap;
        for(int i = 0; i < nums.size(); i++){
            //loop the vector

            if(myMap.contains(target - nums[i])){
                //check if this number is not part of a current compliment in keyset
                // if yes return the index of compliment to the current number, and the current index 
                vector<int> result = {myMap.at(target - nums[i])[0],i};
                return result;
            }else if(!myMap.contains(nums[i])){
                //if index is not in keyset add it
                //we track the numbers we've seen with the keyset
                //the value pair is a vector of [key index, target - key]
                myMap[nums[i]] = {i,target - nums[i]};
            }
        }
        return {-1,-1};
    }
};