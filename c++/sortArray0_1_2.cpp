#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,0,0,0,1,1,1,2,2};
    int count0 = 0, count1 = 0, count2 = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    int idx = 0;
    for(int i = 0; i < count0; i++){
        nums[idx] = 0;
        idx++;
    } 
    for(int i = 0; i < count1; i++){
        nums[idx] = 1;
        idx++;
    }
    for(int i = 0; i < count2; i++){
        nums[idx] = 2;
        idx++;
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

}
