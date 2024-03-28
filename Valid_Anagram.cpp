class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());sort(t.begin(),t.end());//sorting the both the strings
        return s==t;}};//printing the equally assigned strings
