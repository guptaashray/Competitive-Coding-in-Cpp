//Vector in C++ STL
//Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled
// automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data
// is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes
// only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
//
//Certain functions associated with the vector are:
//begin() – Returns an iterator pointing to the first element in the vector
//end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
//rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
//size() – Returns the number of elements in the vector.
//max_size() – Returns the maximum number of elements that the vector can hold.
//assign() – It assigns new value to the vector elements by replacing old ones
//push_back() – It push the elements into a vector from the back
//pop_back() – It is used to pop or remove elements from a vector from the back.
//insert() – It inserts new elements before the element at the specified position
//emplace() – It extends the container by inserting new element at position
//emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for (int i = 1; i <= 5; i++)
        v.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout << *ir << " ";
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
    // fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // removes last element
    v.pop_back();

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    // removes the first element
    v.erase(v.begin());

    cout << "\nThe first element is: " << v[0];

    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

}