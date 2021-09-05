// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool is_all_9 = all_of(digits.begin(), digits.end(), [](int n) { return n==9; });
        
        if(is_all_9) {
            digits.resize(digits.size()+1);
            fill(digits.begin(), digits.end(), 0);
            digits[0] = 1;
        } else {
            bool carry = true;  // 1 to add
            for(auto it=digits.rbegin(); it != digits.rend(); ++it) {
                if(!carry) break;

                int new_v = (*it + 1) % 10;
                *it = new_v;

                carry = new_v == 0;
            }
        }
        return digits;
    }
};
