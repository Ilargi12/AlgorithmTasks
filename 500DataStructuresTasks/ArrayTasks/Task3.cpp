#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printAllSubbarrays(unordered_multimap<int, int> multimap, vector<int> array, int currentSum, int index){
    for(auto it = multimap.find(currentSum); it != multimap.end(); it++){
            cout << "{ ";
            for (size_t j = it->second+1; j <= index; j++){
                cout << array[j] << " ";
            }
            cout << "}" << endl;
        }
}

void solution(vector<int> array){
    unordered_multimap<int, int> multimap;
    //insert 0 just in case array starts with 0
    multimap.insert(pair<int, int> (0, -1));
    int currentSum = 0;
    for (size_t i = 0; i < array.size(); i++){
        currentSum += array[i];
        if(multimap.find(currentSum) != multimap.end()){
            printAllSubbarrays(multimap, array, currentSum, i);
        }

        multimap.insert(pair<int, int>(currentSum, i));
    }
    

}

int main () {
  vector<int> array = {0, 2, -2, 10, -10};
  solution(array);
  return 0;
}