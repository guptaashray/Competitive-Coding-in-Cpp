//Given a binary array, find the maximum number of consecutive 1s in this array.
//
//Example 1:
//Input: [1,1,0,1,1,1]
//Output: 3
//Explanation: The first two digits or the last three digits are consecutive 1s.
//The maximum number of consecutive 1s is 3.
//Note:
//
//The input array will only contain 0 and 1.
//The length of input array is a positive integer and will not exceed 10,000
#include <iostream>
#include <vector>
class Array{
public:
    static void add_number(std::vector <int> &arr);
    static int consecutive_ones(std::vector<int> arr);
};
void Array::add_number(std::vector <int> &arr){
    int n;
    std::cout<<"How many numbers do you want to add\n";
    std::cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
}
int Array::consecutive_ones(std::vector<int> arr){
    int count = 0,result=0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0)
            count = 0;
        else
        {
            count++;
            result = std::max(count,result);
        }
    }
    return result;
}
int main(){
    std::vector <int> arr;
    Array X{};
    X.add_number(arr);
    int count = X.consecutive_ones(arr);
    std::cout<< "Count is "<<count;
}