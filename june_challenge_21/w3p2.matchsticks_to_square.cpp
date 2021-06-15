class Solution {
    array<int,4> curr_length;
    int side_length{0};
public:
    bool recurse(vector<int>& m, int i) {
        if(i == m.size())   return all_of(curr_length.begin(),curr_length.end(),[&](int c) {return c==side_length;});

            for(int& s: curr_length) {
            if(s == side_length) continue;

            if(s+m[i] <= side_length) {
                s += m[i];
                if( recurse(m,i+1) == true ) return true;

                else s -= m[i];
            }
        }
        return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if(sum % 4 != 0) return false;

        side_length = sum / 4;
        fill(curr_length.begin(), curr_length.end(), 0);
        sort(matchsticks.begin(),matchsticks.end());
        
        return recurse(matchsticks,0);
    }
};

int main() {
	vector<int> tc = {211559,9514615,7412176,5656677,3816020,452925,7979371,5025276,8882605,944541,9889007,2344356,7252152,749758,2311818};

	makesquare(tc);
}
