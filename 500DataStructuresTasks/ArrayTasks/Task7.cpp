#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> array, int sum){
    int len = 0;
    int currSum = 0;
    // maping sum => ending vector
    map<int, int> map;
    map.insert(pair<int, int>(0, -1));
    for (size_t i = 0; i < array.size(); i++){
        currSum += array[i];
        if(map.find(currSum) == map.end()){
            map[currSum] = i;
        }

        if(map.find(currSum - sum) != map.end() && len < i - map[currSum - sum]){
            len = i - map[currSum - sum];
        }
    }
    return len;
}

int main () {
  vector<int> array = {1, 2, 3, 10, -11};
  int sum = 5;
  cout << solution(array, sum);
  return 0;
}