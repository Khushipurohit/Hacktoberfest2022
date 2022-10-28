//Author: Khushi Purohit
//Language: C++

class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int res;
        int min = INT_MAX;
    
        int h, l;
    for(int i = arr.size() -  1; i >= 2; i--){
        h = i - 1;
        l = 0;
        
        int k = arr[i];
        
        while(l < h){
            int left = arr[l];
        int right = arr[h];

        int x = right + left + k;
            if(abs(x - target) < min){
                min = abs(x - target);
                res = x;
            }
            
           if(x==target){
                   
                    return target;
                    break;

                }
                else if(x < target)
                    l++;
                else
                  h--;
            }
        }
        
    
    return res;
    }
};
