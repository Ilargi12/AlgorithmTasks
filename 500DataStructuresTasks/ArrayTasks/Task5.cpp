#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solution(vector<int> array){
    set<int> set;
    for (size_t i = 0; i < array.size(); i++){
        if (set.find(array[i]) != set.end()){
            cout << "Duplicate element is : " << array[i] << endl;
            return;
        }
        set.insert(array[i]);
    }
    cout << "Every element is unique!" << endl;
}

int main () {
  vector<int> array = {8, 7, 2, 102, 21, 1, 7};
  solution(array);
  return 0;
}