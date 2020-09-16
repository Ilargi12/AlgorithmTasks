#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool solution(vector<int> array){
    set<int> set;
    //insert 0 just in case array starts with 0
    set.insert(0);
    int currentSum = 0;
    for (size_t i = 0; i < array.size(); i++){
        currentSum += array[i];
        if (set.find(currentSum) != set.end()){
            return true;
        }
        set.insert(currentSum);
    }
    return false;
}

int main () {
  vector<int> array = {1, 3, 2, -7, 10, 102};
  cout << solution(array) << endl;
  return 0;
}