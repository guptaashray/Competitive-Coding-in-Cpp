#include <iostream>
using namespace std;
//Function Template
template <typename T, int limit>
T arr_max(T arr[], int n){
    if(n>limit){
        cout<<"Limit Exceeded\n";
        return 0;
    }
    T res = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}
int main(){
    float a[]={1.4,3.8,2.6,4.4,7.6,5.1};
    //Function Template Calling
    cout<<arr_max<float,10>(a,6)<<"\n";
    //const int x=3;
    //cout<<arr_max<float,x>(a,6)<<"\n";
}