#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static void merge(vector<int>& nums1, int m, vector<int>nums2, int n) {
        vector<int> nums1_temp(m-n);
        nums1_temp.assign(nums1.begin(),nums1.begin()+(m-n));
        display(nums1_temp);
        int c1=0,c2=0,i=0;
            while(c1<m-n && c2<n) {
                if (nums1_temp[c1] < nums2[c2]) {
                    nums1[i] = nums1_temp[c1];
                    c1++;
                    i++;
                } else {
                    nums1[i] = nums2[c2];
                    c2++;
                    i++;
                }
            }
            while(c1<m-n){
                nums1[i]=nums1_temp[c1];
                i++;
                c1++;
            }
            while(c2<n){
                nums1[i] = nums2[c2];
                c2++;
                i++;
            }
        }
    static void display(vector<int> nums1){
        for(int num:nums1){
            cout<<num<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    vector<int> nums2 ={2,5,6};
    Solution x{};
    x.display(nums1);
    x.display(nums2);
    x.merge(nums1,6,nums2,3);
    x.display(nums1);
}