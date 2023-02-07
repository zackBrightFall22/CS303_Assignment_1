#include <iostream>
#include <string>
using  namespace std;
/**** FUNCTIONS DECLARATION****/

// 1.
int checkValue(int arr[], int size);
//PRE : Takes an array of integers and index of last active element in array.
//POST: Asks user for integer input and checks if the integer exists in the array if the number is present return the index where the number is present, else return -1.

// 2.
string changeValue(int arr[], int arrIndex);
//PRE : Takes in an array of integers and index of last active element in array..
//POST: Asks the user for an index and new value. Modifies the value of the integer at the index value passed in and return the new value and old value back to the user. Can handle bad input for either index or new value.

// 3. 
int appendValue(int arr[], int index);
//PRE : Takes an array of integers and index of last active element in array.
//POST: Asks user to input an integer and adds the new integer value to the end of the array, increases index of last active element and returns this value.

// 4.
int deleteValue(int arr[], int size, int arrIndex);
//PRE : Takes an array of integers, total size of array and the index of last active element in array.
//POST: Asks user to iput index of element to delete and removes the value at the given index, shifts all elements after that element over one left, decreases the the index of last active element and returns this value.