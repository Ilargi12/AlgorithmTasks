#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long solution(vector<ll> a, vector<ll> b, ll r, ll avg){
    vector<pair<ll, ll>> examAndEssays;
    ll currSum = 0;
    ll n = a.size();
    for (size_t i = 0; i < a.size(); i++){
        currSum += a[i];
        if(currSum/n >= avg) return 0;
    }
    
    for (size_t i = 0; i < a.size(); i++){
        if(a[i] < r) examAndEssays.push_back(pair<ll, ll>(b[i], a[i]));
    }
    sort(examAndEssays.begin(), examAndEssays.end());

    int index = 0;
    long long essaysToWrite = 0;
    while((double)currSum/n < avg){
        long long minPoints = min(r-examAndEssays[index].second, n*avg - currSum);
        currSum += minPoints;
        essaysToWrite += minPoints*examAndEssays[index].first;
        index++;
    }
    return essaysToWrite;
}

int main () {
    long long n, r, avg;
    scanf("%lld%lld%lld", &n, &r, &avg);
    vector<long long> a;
    vector<long long> b;
    while(n--){
        long long a_tmp, b_tmp;
        scanf("%lld%lld", &a_tmp, &b_tmp);
        a.push_back(a_tmp);
        b.push_back(b_tmp);
    }
   
    cout << solution(a, b, r, avg) << endl;
}