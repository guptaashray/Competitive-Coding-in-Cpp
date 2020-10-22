//Squares of a Sorted Array
//
//Solution
//Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.
//Example 1:
//
//Input: [-4,-1,0,3,10]
//Output: [0,1,9,16,100]
//Example 2:
//
//Input: [-7,-3,2,3,11]
//Output: [4,9,9,49,121]
//
//
//Note:
//
//1 <= A.length <= 10000
//-10000 <= A[i] <= 10000
//A is sorted in non-decreasing order.
#include <iostream>
#include <vector>
class Squares {
private:
    std::vector<int> nums;
public:
    void add_numbers() {
        int n;
        std::cout << "How many numbers do you want to add\n";
        std::cin >> n;
        int x = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> x;
            nums.push_back(x);
        }
    }

    void quicksort(std::vector <int> &num, int l, int r) {
        // Base case: No need to sort arrays of length <= 1
        if (l >= r) {
            return;
        }

        // Choose pivot to be the last element in the subarray
        int pivot = num[r];

        // Index indicating the "split" between elements smaller than pivot and
        // elements greater than pivot
        int cnt = l;

        // Traverse through array from l to r
        for (int i = l; i <= r; i++) {
            // If an element less than or equal to the pivot is found...
            if (num[i] <= pivot) {
                // Then swap arr[cnt] and arr[i] so that the smaller element arr[i]
                // is to the left of all elements greater than pivot
                swap(&num[cnt], &num[i]);

                // Make sure to increment cnt so we can keep track of what to swap
                // arr[i] with
                cnt++;
            }
        }
        // NOTE: cnt is currently at one plus the pivot's index
        // (Hence, the cnt-2 when recursively sorting the left side of pivot)
        quicksort(num, l, cnt - 2); // Recursively sort the left side of pivot
        quicksort(num, cnt, r);   // Recursively sort the right side of pivot
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void squares(){
        for(int i = 0; i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        quicksort(nums, 0, nums.size()-1);
    }
    void display(){
        for(int i=0;i<nums.size();i++){
            std::cout<< nums[i]<<" ";
        }
    }
};
int main(){
    Squares x{};
    x.add_numbers();
    x.squares();
    x.display();
}