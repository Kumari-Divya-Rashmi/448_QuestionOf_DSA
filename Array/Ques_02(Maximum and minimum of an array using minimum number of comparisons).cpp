#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        
        // int max = *max_element(arr.begin(),arr.end());
        // int min = *min_element(arr.begin(),arr.end());
        // return {min,max};
        
        
    }
};

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        
        int n = arr.size();
        int min,max;
        sort(arr.begin(),arr.end());
        for(int i = 0; i < n; i++){
            min = arr[0];
            max = arr[n-1];
        }
        return {min,max};
    }
};