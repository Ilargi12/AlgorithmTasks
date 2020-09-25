#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> array){
    for (size_t i = 1; i < array.size(); i++){
        if(array[i] >= array[i-1]){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    
}

int main () {
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> array(n);
        for(int& x : array){
            scanf("%d", &x);
        }
        solution(array);
    }
}