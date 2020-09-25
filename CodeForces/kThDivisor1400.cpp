#include <bits/stdc++.h>
using namespace std;

long long solution(long long n,long long k){
    if(k == 1) return 1;
    int numberOfDivisors = 0;
    for (size_t i = 1; i < sqrt(n); i++){
        if(n % i == 0) numberOfDivisors+=2;
    }
    if ((long long)sqrt(n) * (long long)sqrt(n) == n) numberOfDivisors++;
    if(k > numberOfDivisors) return -1; 
    int iThDivisor = 0;   
    for (size_t i = 1; i < sqrt(n); i++){
        if(n % i == 0) iThDivisor++;
        if(iThDivisor == k) return i;
        if(numberOfDivisors - iThDivisor + 1 == k) return n/i;
    }
    return (long long)sqrt(n);
    
}

int main () {
    long long n;
    long long k;
    scanf("%lld%lld", &n, &k);
    cout << solution(n, k) << endl;
} 