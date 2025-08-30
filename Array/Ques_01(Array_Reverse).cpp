#include <bits/stdc++.h>
using namespace std;

//Naive approach

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
       int n = arr.size();
       vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            temp[i] = arr[n -i -1];
        }
        for(int i = 0; i < n; i++){
            arr[i] = temp[i];
            
        }
    }
};


//Alternative Approach

/*class Solution {
  public:
    void reverseArray(vector<int> &arr) {
      int n = arr.size();
        for (int i = 0; i < n/2; i++) {
            swap(arr[i],arr[n - i - 1]);
        }
    }
};
*/