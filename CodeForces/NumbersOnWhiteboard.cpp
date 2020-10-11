#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void solution(vector<int> array){
    int n = array.size();
    if(array.size() == 2){
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    cout << 2 << endl;
    cout << n-2 << " " << n << endl;
    cout << n-1 << " " << n-1 << endl;
    for (size_t i = array.size()-3; i > 0; i--)
    {
        cout << i << " " << i+2 << endl;
    }
}

int main () {
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> array(n);
        for (size_t i = 0; i < array.size(); i++)
        {
            array[i] = i+1; 
        }
        solution(array);
    }
}