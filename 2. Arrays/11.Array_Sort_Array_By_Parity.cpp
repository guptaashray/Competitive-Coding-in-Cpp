//Sort Array By Parity
//
//Solution
//        Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
//
//You may return any answer array that satisfies this condition.
//
//
//
//Example 1:
//
//Input: [3,1,2,4]
//Output: [2,4,3,1]
//The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
//
//
//Note:
//
//1 <= A.length <= 5000
//0 <= A[i] <= 5000
#include <iostream>
#include <vector>
void sort_parity(std::vector<int> &A);
int main(){
    int n;
    std::cout<<"Enter number of elements in an array?\n";
    std::cin>>n;
    std::vector<int> A;
    while(n>0){
        int x;
        std::cin>>x;
        A.push_back(x);
        n--;
    }
    sort_parity(A);
    for(int x:A){
        std::cout<<x<<" ";
    }
}
void sort_parity(std::vector<int> &A){
    std::vector<int> even;
    std::vector<int> odd;
    for(int x:A){
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    int i = 0;
    while(i<even.size()){
        A[i]=even[i];
        i++;
    }
    int j=0;
    while(i<A.size()){
        A[i]=odd[j];
        j++;
        i++;
    }
}