#include <cctype>

class Solution {
public:
    bool isValidChar(char c){
        bool upperCase = 65 <= (int) c && (int) c <= 90;
        bool lowerCase = 97 <= (int) c && (int) c <= 122;
        bool numeric = 48 <= (int) c && (int) c <= 57;
        return upperCase || lowerCase || numeric;
    }
    bool isPalindrome(string s) {
        
        int left = 0;
        int right = s.length()-1;
        
        while(left < right){//if the length is odd 
                                //dont need to check middle ie left == right
                            //if the length is even 
                                //dont need to check left > right because we will have already checked that case in reverse one check prior
            
            //skipping past chars that are puncuation or space chars
            if(!isValidChar(s.at(left))){
               left++;
               continue;
            }
            if(!isValidChar(s.at(right))){
               right--;
               continue; 
            }
            //actual check
            if(std::tolower(s.at(left)) != std::tolower(s.at(right))){
                return false;
            }
            right--;
            left++;
        }
        return true;

    }
};
