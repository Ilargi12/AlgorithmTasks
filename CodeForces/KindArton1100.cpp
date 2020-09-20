#include <bits/stdc++.h>
using namespace std;

bool solution(vector<int> a, vector<int> b){
    bool isThereOne = false;
    bool isThereMinusOne = false;
    int i = 0;
    while(i < a.size() && !(isThereOne && isThereMinusOne) ){
        if( !(a[i] == b[i] || (b[i] > a[i] && isThereOne) || (b[i] < a[i] && isThereMinusOne)) )
            return false;

        if(a[i] == 1) isThereOne = true;
        if(a[i] == -1) isThereMinusOne = true;
        i++;
    }
    return true;
}

int main () {
    int n; 
    cin >> n;
    for (size_t i = 0; i < n; i++){
        int arrLen;
        cin >> arrLen;
        vector<int> a;
        vector<int> b;
        for (size_t i = 0; i < arrLen; i++){
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (size_t i = 0; i < arrLen; i++){
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }
        solution(a, b) ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
    
}