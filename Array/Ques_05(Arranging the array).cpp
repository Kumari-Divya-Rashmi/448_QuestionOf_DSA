#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void Rearrange(int arr[], int n) {
        
        vector<int> negative;
        vector<int> positive;
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                negative.push_back(arr[i]);
            }else{
                positive.push_back(arr[i]);
            }
        }
        int j = 0;
        for(int i = 0; i < negative.size(); i++){
            arr[j++] = negative[i];
        }
        for(int i = 0; i < positive.size(); i++){
            arr[j++] = positive[i];
        }
       
    }
};