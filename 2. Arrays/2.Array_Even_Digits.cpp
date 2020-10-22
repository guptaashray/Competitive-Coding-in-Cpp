//Find Numbers with Even Number of Digits
//        Given an array nums of integers, return how many of them contain an even number of digits.
//
//
//Example 1:
//
//Input: nums = [12,345,2,6,7896]
//Output: 2
//Explanation:
//12 contains 2 digits (even number of digits).
//345 contains 3 digits (odd number of digits).
//2 contains 1 digit (odd number of digits).
//6 contains 1 digit (odd number of digits).
//7896 contains 4 digits (even number of digits).
//Therefore only 12 and 7896 contain an even number of digits.
//Example 2:
//
//Input: nums = [555,901,482,1771]
//Output: 1
//Explanation:
//Only 1771 contains an even number of digits.
//
//
//Constraints:
//
//1 <= nums.length <= 500
//1 <= nums[i] <= 10^5
#include <iostream>
#include <vector>
class Max{
private:
    std::vector <int> nums;
public:
    void add_numbers(){
        int n;
        std::cout<<"How many numbers do you want to add\n";
        std::cin>> n;
        int x=0;
        for(int i = 0;i<n;i++){
            std::cin>>x;
            nums.push_back(x);
        }
    }
    void count_digits(){
        int result=0;
        for(int num : nums){
            int n = num, c=0;
            while(n>0){
                c++;
                n/=10;
            }
            if(c%2==0)
                result++;
        }
        std::cout<<result;
    }
};
int main(){
    Max x{};
    x.add_numbers();
    x.count_digits();
}