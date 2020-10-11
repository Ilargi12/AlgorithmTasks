#include <bits/stdc++.h>
using namespace std;


//NEEDS IMPROVING
bool isSumZero(vector<int> array){
    int sum = accumulate(array.begin(), array.end(), 0);
    return sum != 0;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

bool solution(vector<int>& array){
    if(!isSumZero(array)) return false;
    sort(array.begin(), array.end(), greater<int>());
    int currSum = 0;
    for (size_t i = 0; i < array.size(); i++)
    {
        currSum += array[i];
        if(currSum == 0){
            swap(array[i], array[array.size() -1]);
            currSum = currSum + array[i] - array[array.size() -1];
        }
    }
    return true;
}

int main () {
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        vector<int> array(n);
        for(int& x : array){
            scanf("%d", &x);
        }
        if(!solution(array)){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
            for (size_t i = 0; i < array.size(); i++){
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
}

