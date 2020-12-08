#include <bits/stdc++.h>
using namespace std;

void solution(int a, int b, int c, int d, int n){
    if(a != b && c != d){
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        if(a == c){
            cout << n << " " << n-1 << endl;
        } else 
            cout << n-1 << " " << n << endl;
        return;
    } else if(a == b)
}

int main () {
    int t, n;
    int a, b, c, d;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        for (size_t i = 0; i < n; i++){
            string line;
            getline(cin, line);
            for (size_t j = 0; j < n; i++){
                if(i == 0 && j == 1) a = line[j]-48;
                else if(i == 1 && j == 0) b = line[j]-48;
                else if(i == n-2 && j == n-1) c = line[j]-48;
                else if(i == n-1 && j == n-2) d = line[j]-48;
            }
            solution(a, b, c, d, n);
        }
    }
}