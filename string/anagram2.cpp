#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<string>> groupanagram(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        string key = "";
        for (int i = 0; i < 26; i++) {
            key += "#" + to_string(freq[i]);
        }

        mp[key].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto &it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {
    vector<string> strs = {"bat", "eat", "tea", "tan", "ate", "nat"};

    vector<vector<string>> result = groupanagram(strs);

    for (auto &group : result) {
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
