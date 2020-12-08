#include <bits/stdc++.h>
using namespace std;

int solution(int n, int k){
    int power_two = 0;
    int sum = 0;
    while (!(n == 0 && k == 0)){
        if(n%2 != k%2) sum += (int) pow(2, power_two);
        n /= 2;
        k /= 2;
        power_two++;
    }
    return sum;
}

int main () {
    int t, n, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        cout << solution(n, k) << endl;
    }
}