#include <bits/stdc++.h>
using namespace std;



bool solution(int n, int & threes, int & fives, int & sevens){
    if(n == 1 || n == 2 || n == 4) return false;
    int remainder = n%3;
    if(remainder == 1){
        sevens++;
        n -= 7;
    } else if(remainder == 2){
        fives++;
        n -= 5;
    }
    threes += n/3;
    return true;
}

int main () {
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int threes = 0;
        int fives = 0;
        int sevens = 0;
        if(solution(n, threes, fives, sevens)){
            cout << threes << " " << fives << " " << sevens << endl;
        } else
            cout << -1 << endl;
    }
}