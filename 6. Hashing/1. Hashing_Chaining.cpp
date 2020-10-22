#include <iostream>
#include <list>
using namespace std;

struct MyHash{
    int bucket;
    list<int> *table;
    MyHash(int b){
        bucket=b;
        table=new list<int>[bucket];
    }
    int hash(int key){
        return (key%bucket);
    }
    bool search(int key){
        int i=hash(key);
        for(auto x:table[i]){
            if(x==key)
                return true;
        }
        return false;
    }
    void insert(int key){
        int i =hash(key);
        table[i].push_back(key);
    }
    void remove(int key){
        int i =hash(key);
        table[i].remove(key);
    }
};
int main(){
    struct MyHash T = *new MyHash(5);
    T.insert(20);
    T.insert(16);
    T.insert(18);
    T.insert(25);
    T.remove(20);
    cout<<T.search(16);
}