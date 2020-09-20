#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m, int costForOneRide, int costForMRides){
    if(costForOneRide < (double)costForMRides/m){
        return n*costForOneRide;
    }
    int totalCost = 0;
    int divider = floor(n/m);
    n -= divider*m;
    totalCost += divider*costForMRides;
    totalCost += min(n*costForOneRide, costForMRides);
    return totalCost;
}

int main () {
    int n, m, costForOneRide, costForMRides;
    cin >> n >> m >> costForOneRide >> costForMRides;
    cout << solution(n, m, costForOneRide, costForMRides);
}