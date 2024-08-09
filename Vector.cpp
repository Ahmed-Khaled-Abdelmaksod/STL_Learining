/*
 * Filename: sort_vector.cpp
 * Description: This program demonstrates the usage of the `vector` container and the `sort` function from the C++ Standard Template Library (STL).
 *              The program reads a list of integers from the user, stores them in a vector, sorts the vector, and then outputs the sorted integers.
 * 
 * Author: Ahmed Khaled Abdelmaksod 
 * Date: 10 AUG 2024
 * 
 * Functions:
 *   - int main(void): The main function that drives the program.
 * 
 * How it works:
 *   1. The program starts with an empty vector of integers (`vector<int> v`).
 *   2. It reads an integer `n` from the user, which specifies the number of elements to be input.
 *   3. The program reads `n` integers and appends them to the vector using the `push_back` method.
 *   4. The `sort` function is used to sort the vector in ascending order.
 *   5. The sorted vector is then printed to the standard output.
 * 
 * Example Usage:
 *   Input:
 *     5
 *     4 2 5 1 3
 * 
 *   Output:
 *     1 2 3 4 5
 * 
 * Notes:
 *   - The `vector` container is a dynamic array that can grow in size as needed.
 *   - The `sort` function sorts the elements in ascending order by default.
 *   - The use of the range-based for loop (`for(int i:v)`) simplifies the iteration over the vector.
 * 
 * References:
 *   - https://en.cppreference.com/w/cpp/container/vector
 *   - https://en.cppreference.com/w/cpp/algorithm/sort
 */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
    // size of it is 0 now 
    vector<int> v; // Declare an empty vector of integers

    int n = 0, x = 0;
    cin >> n; // Read the number of elements to be added to the vector

    for(int i = 0; i < n; i++)
    {
        cin >> x; // Read each integer
        v.push_back(x); // Add the integer to the vector
    }

    sort(v.begin(), v.end()); // Sort the vector in ascending order

    for(int i : v)
    {
        cout << i << " "; // Print the sorted elements
    }
    cout << endl;

    return 0;
}
