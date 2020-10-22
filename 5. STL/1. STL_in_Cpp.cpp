#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
int main(){
    std::cout<<"\nThe Trick to Learn STL : SSR-MMS-OF-ED-PS-IPPC: ";
    std::vector<int> ar = {10,20,13,41,15,15};
    // ITERATOR
    std::vector<int>::iterator ptr = ar.begin();
    //auto ptr = ar.begin();

    // Printing using Pointer.
    std::cout<<"\nThe array before sorting is : ";
    for(ptr = ar.begin();ptr<ar.end();ptr++){
        std::cout<< *ptr<<" ";
    }
    // STL SORT
    sort(ar.begin(),ar.end());
    std::cout<<"\nThe array after sorting is : ";
    for(ptr = ar.begin();ptr<ar.end();ptr++){
        std::cout<< *ptr<<" ";
    }
    // STL BINARY SEARCH
    if (binary_search(ar.begin(), ar.end(), 10))
    //if (binary_search(ptr, ptr+5, 10))
        std::cout << "\nElement 10 found in the array";
    else
        std::cout << "\nElement 10 not found in the array";
    if (binary_search(ar.begin(), ar.end(), 11))
    //if (binary_search(ptr, ptr+5, 10))
        std::cout << "\nElement 11 found in the array";
    else
        std::cout << "\nElement 11 not found in the array";
    // Reversing the Vector
    reverse(ar.begin(), ar.end());

    std::cout << "\nVector after reversing is: ";
    for (int i=0; i<6; i++)
        std::cout << ar[i] << " ";

    std::cout << "\nMaximum element of vector is: ";
    std::cout << *max_element(ar.begin(), ar.end());

    std::cout << "\nMinimum element of vector is: ";
    std::cout << *min_element(ar.begin(), ar.end());

    // Starting the summation from 0
    std::cout << "\nThe summation of vector elements is: ";
    std::cout << accumulate(ar.begin(), ar.end(), 0);

    std::cout << "\nOccurrences of 15 in vector : ";

    // Counts the occurrences of 15 from 1st to last element
    std::cout << count(ar.begin(), ar.end(), 15);

    // find() returns iterator to last address if
    // element not present
    find(ar.begin(), ar.end(),5) != ar.end()?
    std::cout << "\nElement 5 found":
    std::cout << "\nElement 5 not found";

//    lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
//    upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
//    upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.
//    Sort the array to make sure that lower_bound() and upper_bound() work.
    sort(ar.begin(), ar.end());
    // Returns the first occurrence of 20
    auto q = lower_bound(ar.begin(), ar.end(), 13);

    // Returns the last occurrence of 20
    auto p = upper_bound(ar.begin(), ar.end(), 13);

    std::cout << "\nThe lower bound is at position: ";
    std::cout << q-ar.begin();

    std::cout << "\nThe upper bound is at position: ";
    std::cout << p-ar.begin();

//  arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
//  arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
    ar.erase(ar.begin()+1);

    std::cout << "\nVector after erasing the element: ";
    for (int i=0; i<5; i++)
        std::cout << ar[i] << " ";
    // sorting to enable use of unique()
    sort(ar.begin(), ar.end());

    std::cout << "\nVector before removing duplicate "
            " occurrences: ";
    for (int i=0; i<5; i++)
        std::cout << ar[i] << " ";

    // Deletes the duplicate occurrences
    ar.erase(unique(ar.begin(),ar.end()),ar.end());

    std::cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< ar.size(); i++)
        std::cout << ar[i] << " ";

//  distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index.
    // Return distance of first to maximum element
    std::cout << "\nDistance between first to max element: ";
    std::cout << distance(ar.begin(),max_element(ar.begin(), ar.end()));

    // partitioning vector using partition()
    partition(ar.begin(), ar.end(), [](int x)
    {
        return x%2==0;

    });
    std::cout << "\nVector after partition: ";
    for (int i=0; i< ar.size(); i++)
        std::cout << ar[i] << " ";

    // Checking if vector is partitioned using is_partitioned()
    is_partitioned(ar.begin(), ar.end(), [](int x)
    {
        return x%2==0;

    })?
    std::cout << "\nNow, vector is partitioned after partition operation.":
    std::cout << "\nVector is still not partitioned after partition operation.";

    std::vector<int> vect = { 2, 1, 5, 6, 8, 7 };
    // partitioning vector using stable_partition() in sorted order
    stable_partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2 == 0;
    });
    // Displaying partitioned Vector
    std::cout << "\nThe partitioned vector is : ";
    for (int &x : vect) std::cout << x << " ";

    // Declaring iterator
    std::vector<int>::iterator it1;

    // using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
    });

    // Displaying partitioned Vector
    std::cout << "\nThe vector elements returning true for condition are : ";
    for ( it1= vect.begin(); it1!=it; it1++)
        std::cout << *it1 << " ";

    // Declaring vector1
    std::vector<int> vect1;

    // Declaring vector1
    std::vector<int> vect2;

    // Resizing vectors to suitable size using count_if() and resize()
    int n = count_if (vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;

    } );
    vect1.resize(n);
    vect2.resize(vect.size()-n);

    // Using partition_copy() to copy partitions
    partition_copy(vect.begin(), vect.end(), vect1.begin(),
                   vect2.begin(), [](int x)
                   {
                       return x%2==0;
                   });

    // Displaying partitioned Vector
    std::cout << "\nThe elements that return true for condition are : ";
    for (int &x : vect1)
        std::cout << x << " ";
    // Displaying partitioned Vector
    std::cout <<"\nThe elements that return false for condition are :";
    for (int &x : vect2)
        std::cout << x << " ";

}