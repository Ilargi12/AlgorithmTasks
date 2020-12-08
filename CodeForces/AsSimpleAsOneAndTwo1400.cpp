#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string n){
    vector<int> result;
    for (size_t i = 0; i + 2 < n.size(); i++){
       if((n[i] == 't' && n[i+1] == 'w' && n[i+2] == 'o') || (n[i] == 'o' && n[i+1] == 'n' && n[i+2] == 'e')) {
           result.push_back(i+2);
           n.erase(n[i+2]);
       }
    }       
    return result;
}

int main () {
    int t;
    string n;
    scanf("%d", &t);
    while(t--){
        getline(cin, n);
        vector<int> result = solution(n);
        cout << result.size() << endl;
        for (size_t i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
        
    }
}