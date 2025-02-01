//UID:22BCS10472
//Name: Diya Kanwar

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) {
            return 0;
        }
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    
    string haystack1 = "sadbutsad", needle1 = "sad";
    cout << solution.strStr(haystack1, needle1) << endl;
    
    string haystack2 = "leetcode", needle2 = "leeto";
    cout << solution.strStr(haystack2, needle2) << endl;
    
    return 0;
}
