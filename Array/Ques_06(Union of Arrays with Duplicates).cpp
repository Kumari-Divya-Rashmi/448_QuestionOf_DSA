#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> uniqueElement;
        vector<int> result;
        for(int num : a){
            uniqueElement.insert(num);
        }
        for(int num : b){
            uniqueElement.insert(num);
        }
        for(int num : uniqueElement){
            result.push_back(num);
        }
        return result;
    }
};