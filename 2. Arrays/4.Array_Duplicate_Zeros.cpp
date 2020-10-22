//Duplicate Zeros
//
//Solution
//        Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
//
//Note that elements beyond the length of the original array are not written.
//
//Do the above modifications to the input array in place, do not return anything from your function.
//
//
//
//Example 1:
//
//Input: [1,0,2,3,0,4,5,0]
//Output: null
//        Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
//Example 2:
//
//Input: [1,2,3]
//Output: null
//        Explanation: After calling your function, the input array is modified to: [1,2,3]
//
//
//Note:
//
//1 <= arr.length <= 10000
//0 <= arr[i] <= 9
#include <iostream>
#include <vector>
class Duplicate{
private:
    std::vector<int> arr;
public:
    void add_numbers() {
        int n;
        std::cout << "How many numbers do you want to add?\n";
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            arr.push_back(x);
        }
    }
    void duplicate_zeros(){
        int x=0,y=0;
        std::vector<int> new_arr(arr.size());
        for(int i=0;i < arr.size();i++){
            new_arr[i]=arr[i];
        }
        for(int i=0;i<arr.size();i++){
            if(new_arr[x]!=0){
                arr[y]=new_arr[x];
                x++;
                y++;
            }
            else if(new_arr[x] == 0){
                arr[y]=new_arr[x];
                y++;
                arr[y]=new_arr[x];
                y++;
                x++;
                i++;
            }
        }
    }
    void display(){
        for(int num:arr){
            std::cout<<num<<" ";
        }
    }
};
int main(){
    Duplicate x{};
    x.add_numbers();
    x.duplicate_zeros();
    x.display();
}