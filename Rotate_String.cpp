//UID: 22BCS10472

#include <iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        string combined = s + s;
        return combined.find(goal) != string::npos;
    }
};

int main() {
    Solution solution;
    string s, goal;

    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter goal string: ";
    cin >> goal;

    if (solution.rotateString(s, goal)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
