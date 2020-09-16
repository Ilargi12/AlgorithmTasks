#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> array){
    cout << "[";
    int index = 0;
    for (; index < array.size()-1; index++){
        cout << array[index] << ", ";
    }
    cout << array[index] << "]" << endl;
}

void solution(vector<int>& binaryArray){
    int availableIndex = 0;
    for (size_t i = 0; i < binaryArray.size(); i++){
        if(binaryArray[i] == 0)
            binaryArray[availableIndex++] = 0;
    }
    for (size_t i = availableIndex; i < binaryArray.size(); i++){
        binaryArray[i] = 1;
    }
}

int main () {
  vector<int> binaryArray = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0};
  solution(binaryArray);
  printArray(binaryArray);
  return 0;
}