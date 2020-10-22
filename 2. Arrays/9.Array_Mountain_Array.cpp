//Valid Mountain Array
//
//        Solution
//Given an array A of integers, return true if and only if it is a valid mountain array.
//
//Recall that A is a mountain array if and only if:
//
//A.length >= 3
//There exists some i with 0 < i < A.length - 1 such that:
//A[0] < A[1] < ... A[i-1] < A[i]
//A[i] > A[i+1] > ... > A[A.length - 1]
//
//
//
//
//Example 1:
//
//Input: [2,1]
//Output: false
//Example 2:
//
//Input: [3,5,5]
//Output: false
//Example 3:
//
//Input: [0,3,2,1]
//Output: true
//
//
//Note:
//
//0 <= A.length <= 10000
//0 <= A[i] <= 10000
#include <iostream>
#include <vector>
bool check_mountain(std::vector<int> &arr);
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
    bool x = bool(check_mountain(A));
    std::cout<<x;
}
bool check_mountain(std::vector<int> &A){
    if(A.size()==0) {
        return false;
    }
    int j=0,k=0;
    while(A[j]<A[j+1] && j<A.size()) {
        j++;
    }
    if(j==0){
        return false;
    }
    else{
        k=j;
    }
    while(A[k]>A[k+1] && j<A.size()){
        k++;
    }
    if(k+1==A.size()){
        return true;
    }
    else{
        return false;
    }
}