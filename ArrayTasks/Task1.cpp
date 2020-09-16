#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solution(vector<int> array, int k){
    unordered_map<int, int> A;
    for (size_t i = 0; i < array.size(); i++){
        if (A.find(k - array[i]) != A.end()){
            cout << "Pair found at index : " << A[k-array[i]] << " and " << i << endl;
            return;
        }
        A[array[i]] = i;
    }
}

int main () {
  vector<int> array = {8, 7, 2, 102, 21, 1};
  int k = 10;
  solution(array, k);
  return 0;
}