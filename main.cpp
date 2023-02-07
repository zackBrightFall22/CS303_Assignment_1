// Zack Bright
// zmbrfq@umsystem.edu
// CS303 Assignment 1
// Due Feb 10 2023

#include <iostream>
using  namespace std;
#include "Functions.h"
#include <fstream>
#include <sstream>
#include <iostream>


int main() {

  // 1. READ INPUT FILE TO ARRAY
  
  //Variable Declaration
  ifstream inFile;
  string inRec, tempStr;
  int arr[100];
  int arrIndex = 0;

  //Attempt to open File
	inFile.open("input.csv");
	if (!inFile.is_open()) {
		cout << "File is not open" << endl;
	}

  //loop through intput file
	while (getline(inFile, inRec)) {
		stringstream inSS(inRec);
    // loop through string stream, partioning on ','
    // add each string cast as integer onto the array and incrememnt index
		while (getline(inSS, tempStr, ',')) {
			arr[arrIndex] = stoi(tempStr);
      arrIndex++;
		}
	}
	inFile.close();

  for(int i = 0; i < arrIndex; i++){
    cout << arr[i] << " ";
  }
  cout << "\n\n";

  // 2. CALL FUNCTIONS
  cout << checkValue(arr, arrIndex);
  cout << "\n\n";
  cout << checkValue(arr, arrIndex);
  cout << "\n\n";

  try{
    cout << changeValue(arr, arrIndex);
    cout << "\n\n";
    for(int i = 0; i < arrIndex; i++){
      cout << arr[i] << " ";
    }
  }
  catch (runtime_error e) {
    cout << e.what();
  }
  catch (out_of_range e) {
    cout << e.what();
  }
  cout << "\n\n";
  try{
    arrIndex = appendValue(arr, arrIndex);
    cout << "\n\n";
    for(int i = 0; i < arrIndex; i++){
    cout << arr[i] << " ";
    }
  }
  catch (runtime_error e) {
    cout << e.what();
  }
  catch (out_of_range e) {
    cout << e.what();
  }
  cout << "\n\n";
  arrIndex = deleteValue(arr, 100, arrIndex);
  cout << "\n\n";
  for(int i = 0; i < arrIndex; i++){
    cout << arr[i] << " ";
  }
}