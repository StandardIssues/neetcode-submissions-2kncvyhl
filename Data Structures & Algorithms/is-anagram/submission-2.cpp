#include <string>
#include <iostream>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {   

        if(s.size() != t.size()){
            return false;
        }

        int sArr[26] = {0};
        for(char a : s){
            int ascii = (int)a;
            int index = ascii - 97;
            sArr[index] += 1;
        }

        int tArr[26] = {0};
        for(char a : t){
            int ascii = (int)a;
            int index = ascii - 97;
            tArr[index] += 1;
        }

        for(int n = 0; n < 26; n++){
            if(sArr[n] != tArr[n]){
                return false;
            }
        }
        return true;
    }
};