#include <bits/stdc++.h>
using namespace std;
void findDuplicates(int arr[],int n){
    unordered_set<int> new_set;
    unordered_set<int> dup;
    for(int i=0;i<n;i++){
        if(new_set.find(arr[i])==new_set.end()){
            new_set.insert(arr[i]);
        }
        else{
            dup.insert(arr[i]);
        }
    }
    unordered_set<int>::iterator itr;
    cout<<"Duplicates are";
    for(itr=dup.begin();itr!=dup.end();itr++){
        cout << *itr<<" ";
    }
     cout<<new_set.size();
}
int main(){
    int ar[] ={12,15,16,15,17,18,19};
    int n= sizeof(ar)/ sizeof(ar[0]);
    findDuplicates(ar,n);
}