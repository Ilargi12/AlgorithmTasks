#include <bits/stdc++.h>
using namespace std;


void arraySplitting(vector<int> array, int k, int currSum, int& minSum){
    if(array.empty() || k > array.size()) return;

    if(array.size() == k){
        minSum = min(minSum, currSum);
        return;
    }
    if(k == 1){
        currSum += array[array.size()-1] - array[0];
        minSum = min(minSum, currSum);
        return;
    }

    for (size_t i = 0; i < array.size(); i++){
        vector<int> subarray(array.begin()+i+1, array.end()); 
        arraySplitting(subarray, k-1, currSum+array[i] - array[0], minSum);
    }
}

int arraySplitting(vector<int> array, int k, int currSum){
    if(array.empty() || k >= array.size()) return 0;

    if(k == 1)
        return array[array.size()-1] - array[0];

    int minSum = INT32_MAX;
    for (size_t i = 0; i < array.size(); i++){
        vector<int> subarray(array.begin()+i+1, array.end()); 
        int sum = arraySplitting(subarray, k-1, currSum+array[i] - array[0]);
        minSum = min(sum, minSum);
    }
    return minSum;
}

int actualSolution(vector<int> array, int k){
    int totalCost = array[array.size() - 1] - array[0];
    if(k == 1) return totalCost;
    if(k == array.size()) return 0;

    for (size_t i = 0; i < array.size()-1; i++){
        array[i] = array[i+1] - array[i];
    }
    array.erase(array.end()-1);
    sort(array.begin(), array.end(), greater<int>());
    for (size_t i = 0; i < k-1; i++){
        totalCost -= array[i];
    }
    return totalCost;
    
}

int main () {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> array(n);
    for(int& x : array){
        scanf("%d", &x);
    }
    cout << actualSolution(array, k) << endl;
}