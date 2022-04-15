
#include <vector>
using namespace std;

class Solution {
    
public:
    int triangularSum(vector<int>& input) {
        int currentUpperLimit = input.size();
        while (currentUpperLimit > 1) {
            for (int i = 0; i < currentUpperLimit - 1; ++i) {
                input[i] = (input[i] + input[i + 1]) % 10;
            }
            --currentUpperLimit;
        }
        return input[0];
    }
};
