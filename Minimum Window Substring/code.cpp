#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

bool valid(vector<int>& have, vector<int>& needed) {

    for (int i = 0; i < 256; i++) {

        if (have[i] < needed[i]) {
            return false;
        }
    }

    return true;
}

string minSubStr(string s, string t) {

    vector<int> needed(256, 0);
    vector<int> have(256, 0);

    
    for (char ch : t) {
        needed[ch]++;
    }

    int low = 0;
    int start = 0;
    int ans = INT_MAX;

    
    for (int high = 0; high < s.length(); high++) {

        
        have[s[high]]++;

        
        while (valid(have, needed)) {

            int len = high - low + 1;

            
            if (len < ans) {
                ans = len;
                start = low;
            }

            
            have[s[low]]--;

            
            low++;
        }
    }

    
    if (ans == INT_MAX) {
        return "";
    }

    
    return s.substr(start, ans);
}

int main() {

    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << minSubStr(s, t);

    return 0;
}