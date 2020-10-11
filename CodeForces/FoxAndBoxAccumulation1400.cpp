#include <bits/stdc++.h>
using namespace std;

//NEEDS IMPROVINGS
int solution(vector<int> array){
    sort(array.begin(), array.end(), greater<int>());
    int endBlockIndex = 0;
    int numberOfBlocks = 0;
    for (int i = 0; i < array.size(); i++){
        if(endBlockIndex == i){
            numberOfBlocks++;
            endBlockIndex += array[i]+1;
        } else{
            endBlockIndex = min(endBlockIndex, array[i]+1+i);
        }
    }
    return numberOfBlocks;
}

int main () {
    int n;
    scanf("%d", &n);
    vector<int> array(n);
    for(int& x : array){
        scanf("%d", &x);
    }
   
    cout << solution(array) << endl;
}