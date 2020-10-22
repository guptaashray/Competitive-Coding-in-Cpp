//Unordered Sets in C++ Standard Template Library
//
//An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized.
//All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the
//internally used hash function, but practically they perform very well and generally provide a constant time lookup operation.
//The unordered_set can contain key of any type – predefined or user-defined data structure but when we define key of type user define the type,
//we need to specify our comparison function according to which keys will be compared.
//
//Sets vs Unordered Sets
//Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented
//as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of
// set operations is O(log n) while for unordered_set, it is O(1).
//
//Methods on Unordered Sets:
//For unordered_set many functions are defined among which most users are the size and empty for capacity, find for searching a key, insert and erase for modification.
//The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used.
//
//Example of declaration, find, insert and iteration in unordered_set is given below :

// C++ program to demonstrate various function of unordered_set
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring set for storing string data-type
    unordered_set <string> stringSet ;

    // inserting various string, same string will be stored
    // once in set

    stringSet.insert("code") ;
    stringSet.insert("in") ;
    stringSet.insert("c++") ;
    stringSet.insert("is") ;
    stringSet.insert("fast") ;

    string key = "slow" ;

    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key

    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found" << endl << endl ;
    else
        cout << "Found " << key << endl << endl ;

    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n" ;
    else
        cout << "Found " << key << endl ;

    // now iterating over whole set and printing its
    // content
    cout << "\nAll elements : ";
    unordered_set<string> :: iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;
}