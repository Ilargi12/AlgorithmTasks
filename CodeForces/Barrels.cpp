#include <bits/stdc++.h>
using namespace std;

#define ll long long 

ll solution(vector<int> array, int k){
    sort(array.begin(), array.end(), greater<int>());
    if(array[0] == 0) return 0;
    ll currSum = array[0];
    for (size_t i = 0; i < k; i++)
    {
        currSum += array[i+1];
    }
    return currSum;
}

int main () {
    int t, n, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        vector<int> array(n);
        for(int& x : array){
            scanf("%d", &x);
        }
        cout << solution(array, k) << endl;
    }
}