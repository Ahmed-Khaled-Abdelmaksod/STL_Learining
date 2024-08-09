/*
 * Filename: sort_points.cpp
 * Description: This program demonstrates the usage of the `pair` container and the `sort` function from the C++ Standard Template Library (STL).
 *              The program reads 5 pairs of integers from the user, stores them in an array of `pair<int, int>`, sorts the array,
 *              and then outputs the sorted pairs.
 * 
 * Author: Ahmed Khaled Abdelmaksod
 * Date: 10 AUG 2024
 * 
 * Functions:
 *   - int main(void): The main function that drives the program.
 * 
 * How it works:
 *   1. The program declares an array of 5 pairs (`pair<int, int> points[5]`).
 *   2. It reads 5 pairs of integers from standard input and stores them in the array.
 *   3. The `sort` function from the `<algorithm>` header is used to sort the array of pairs.
 *      - The sorting is done based on the first element of each pair by default.
 *   4. The sorted pairs are printed to the standard output.
 * 
 * Example Usage:
 *   Input:
 *     3 5
 *     1 2
 *     4 4
 *     2 3
 *     5 1
 * 
 *   Output:
 *     --------------------
 *     1 2
 *     2 3
 *     3 5
 *     4 4
 *     5 1
 * 
 * Notes:
 *   - The `pair` container is used to store a pair of values, where each value can be of any type.
 *   - The `sort` function sorts the pairs in ascending order by default, first by the `.first` element, and if they are equal, by the `.second` element.
 */

#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(void)
{
    pair<int,int> points[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> points[i].first >> points[i].second;
    }

    sort(points, points + 5);

    cout << "--------------------\n";
    for(int i = 0; i < 5; i++)
    {
        cout << points[i].first << " " << points[i].second << endl;
    }

    return 0;
}
