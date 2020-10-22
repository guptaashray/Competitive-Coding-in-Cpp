//Move Zeroes
//
//Solution
//        Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//Example:
//
//Input: [0,1,0,3,12]
//Output: [1,3,12,0,0]
//Note:
//
//You must do this in-place without making a copy of the array.
//Minimize the total number of operations.
#include <iostream>
#include <vector>
void move_zeroes(std::vector<int> &nums);
int main(){
    int n;
    std::cout<<"Enter number of elements in an array?\n";
    std::cin>>n;
    std::vector<int> nums;
    while(n>0){
        int x;
        std::cin>>x;
        nums.push_back(x);
        n--;
    }
    move_zeroes(nums);
}
void move_zeroes(std::vector<int> &nums){
    int n = nums.size();

    // Count the zeroes
    int numZeroes = 0;
    for (int i = 0; i < n; i++) {
        numZeroes += (nums[i] == 0);
    }

    // Make all the non-zero elements retain their original order.
    std::vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            ans.push_back(nums[i]);
        }
    }

    // Move all zeroes to the end
    while (numZeroes--) {
        ans.push_back(0);
    }

    // Combine the result
    for (int i = 0; i < n; i++) {
        nums[i] = ans[i];
    }
}