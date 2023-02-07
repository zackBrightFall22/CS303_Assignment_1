#include "Functions.h"
#include <iostream>
#include <string>
#include <limits>
using namespace std;

// 1.
int checkValue(int arr[], int size){
  int value;
  cout << "Enter the value you want to find the index of in the array, will return -1 if not found\n";
  cin >> value;
  
  for (int i = 0; i < size; i++){
    if (arr[i] == value)
      return i;
  }
  return -1;
}

// 2.
string changeValue(int arr[], int arrIndex){
  int newVal, index;
  cout << "Enter the index of the element you want to change\n";
  cin >> index;
  if (!cin) { //throw error for not decimal number
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input received, you must enter a decimal number.\n");
    }
    else if (index < 0 || index > arrIndex) { // throw error for miles <= 0
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid index entered.\n");
    }
  cout << "Enter the new value you want to have at the entered index\n";
  cin >> newVal;
  if (!cin) { //throw error for not decimal number
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input received, you must enter an integer number.\n");
    }
    else if (index < 0 || index > arrIndex) { // throw error for miles <= 0
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid index entered.\n");
    }
  int old = arr[index];
  arr[index] = newVal;
  string returnVal = "Old value: " + to_string(old) + "\nNew value: " + to_string(newVal);
  return returnVal;
}

// 3.
int appendValue(int arr[], int index){
  int value;
  cout << "Enter the value you want to append to the array\n";
  cin >> value;
  if (!cin) { //throw error for not decimal number
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input received, you must enter an integer number.\n");
    }
  arr[index] = value;
  return index + 1;
}

// 4.
int deleteValue(int arr[], int size, int arrIndex){
  //arr[index] = 0;
  int delIndex;
  cout << "Enter the index of the value you want to delete from the array\n";
  cin >> delIndex;
  for(int i = delIndex; i < size; i++){
    arr[i] = arr[i + 1];
  }
  return arrIndex - 1;
}